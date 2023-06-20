#include "main.h"

/**
 * _strcat - Main function that concatenates two strings.
 * @dest: The input string
 * @src: The input string
 * Return: (pointer to the resulting string)
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (tmp);
}
