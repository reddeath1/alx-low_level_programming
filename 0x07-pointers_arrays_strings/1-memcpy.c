#include "main.h"
/**
 * _memcpy - main func
 * @dest: arg
 * @src: arg1
 * @n: arg2
 * Return: always
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i--)
	{
		*dest = *src;
	}


	return (dest);
}
