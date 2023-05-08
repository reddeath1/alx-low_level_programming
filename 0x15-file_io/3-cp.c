#include "main.h"

int safeClose(int);
/**
 * main - The Main function to copy files
 * @argc: number of passed arguments
 * @argv: Pointers to array arguments
 * Return: (1 on success, exits on failure)
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int bytes = 0, _EOF = 1, from_fdr = -1, to_fdr = -1, err = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fdr = open(argv[1], O_RDONLY);
	if (from_fdr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fdr = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to_fdr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		safeClose(from_fdr);
		exit(99);
	}

	while (_EOF)
	{
		_EOF = read(from_fdr, buffer, 1024);
		if (_EOF < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			safeClose(from_fdr);
			safeClose(to_fdr);
			exit(98);
		}
		else if (_EOF == 0)
			break;
		bytes += _EOF;
		err = write(to_fdr, buffer, _EOF);
		if (err < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			safeClose(from_fdr);
			safeClose(to_fdr);
			exit(99);
		}
	}
	err = safeClose(to_fdr);
	if (err < 0)
	{
		safeClose(from_fdr);
		exit(100);
	}
	err = safeClose(from_fdr);
	if (err < 0)
		exit(100);
	return (0);
}

/**
 * safeClose - The function that closes a file and prints error when file closed 
 * @desc: Description error for closed file
 * Return: (1 on success, -1 on failure)
 */
int safeClose(int desc)
{
	int err;

	err = close(desc);
	if (err < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", desc);
	return (err);
}
