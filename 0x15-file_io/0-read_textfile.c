#include "main.h"
/**
 * read_textfile - A Main function to read a text file and print
 * to the POSIX STDOUT
 * @filename: Filename to open
 * @letters: Number of letters to read and print
 * Return: (Number of letters read and printed, or 0 failed)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo, fr, fw;
	char *tmp;

	if (filename == NULL)
		return (0);

	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
		return (0);

	fo = open(filename, O_RDONLY);
	if (fo < 0)
	{
		free(tmp);
		return (0);
	}

	fr = read(fo, tmp, letters);
	if (fr < 0)
	{
		free(tmp);
		return (0);
	}

	fw = write(STDOUT_FILENO, tmp, fr);
	free(tmp);
	close(fo);

	if (fw < 0)
		return (0);
	return ((ssize_t)fw);
}
