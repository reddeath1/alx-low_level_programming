#include "main.h"

/**
 * create_file - A Main function to creates a file
 * @filename: A filename to create
 * @text_content: NULL terminator string to write to a file
 * Return: (1 on success, -1 if the file can not be created, nor written,
 * or write fails).
 */
int create_file(const char *filename, char *text_content)
{
	int fo, fw, ln = 0;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fo < 0)
		return (-1);

	while (text_content && *(text_content + ln))
		ln++;

	fw = write(fo, text_content, ln);
	close(fo);
	if (fw < 0)
		return (-1);
	return (1);
}
