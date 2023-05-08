#include "main.h"

/**
 * append_text_to_file - The main function that appends text at the end to the  file
 * @filename: Filename to open and append ito
 * @text_content: NULL terminator string to add
 * Return: (1 on success, -1 if can not be created, nor written,
 * or write fails).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw, ln = 0;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_RDWR | O_APPEND);
	if (fo < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fo);
		return (1);
	}

	while (*(text_content + ln))
		ln++;

	fw = write(fo, text_content, ln);
	close(fo);
	if (fw < 0)
		return (-1);

	return (1);
}
