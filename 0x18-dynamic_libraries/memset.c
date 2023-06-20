#include "main.h"

/**
 * _memset - Main function that fills memory with constant bytes
 * @s: The location to fill
 * @b: The char to fill the location with
 * @n: The number of bytes to fill
 * Return: (pointer to location filled)
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *begin = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (begin);
}
