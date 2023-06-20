#include "main.h"

/**
 * _strncat - Main function that concatenates two strings.
 * @dest: The destination input string
 * @src: sorce input string
 * @n: an input integer
 * Return: (pointer to the resulting string)
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;
	char *tmp = dest, *begin = src;

	while (*src)
	{
		len++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > len)
		n = len;

	src = begin;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (tmp);
}
