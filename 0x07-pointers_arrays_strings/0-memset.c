#include "main.h"

/**
 * *_memset - main func
 * @dest: arg
 * @src: arg1
 * @n: arg2
 * Return: always
 */


char *_memset(char *dest, char src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src;
	}

	return (dest);
}
