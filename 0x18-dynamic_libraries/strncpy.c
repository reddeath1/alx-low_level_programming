#include "main.h"

/**
 * _strncpy - Main function that copy the strings.
 * @dest: The input string
 * @src: The input string
 * @n: an input integer
 * Return: (A pointer to the string)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int le = 0, i = 0;
	char *tmp = dest, *begin = src;

	while (*src)
	{
		le++;
		src++;
	}

	le++;

	if (n > le)
		n = le;

	src = begin;

	for (; i < n; i++)
		*dest++ = *src++;

	return (tmp);
}
