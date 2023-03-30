#include "main.h"

/**
 * _strcat - main func
 * @dest: arg
 * @src: arg2
 * @n: arg3
 * Return: always
 */

char *_strncat(char *dest, char *src, int n)
{
	char *i = dest;
	int x;

	/* Finding the end of dest */
	while (*i != '\0')
		i++;

	/* Append src to dest */
	x = 0;

	while (x < n && *src != '\0')
	{
		*i = *src;
		i++;
		src++;
		x++;
	}

	/* Add terminating null byte */
	*i = '\0';

	return (dest);
}

