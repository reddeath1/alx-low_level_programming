#include "main.h"

/**
 * _strcat - main func
 * @dest: arg
 * @src: arg2
 * Return: always
 */

char *_strcat(char *dest, char *src)
{
	char *i = dest;

	/* Finding the end of dest */
	while (*i != '\0')
		i++;

	/* Append src to dest */
	while (*src != '\0')
	{
		*i = *src;
		i++;
		src++;
	}

	/* Add terminating null byte */
	*i = '\0';

	return (dest);
}

