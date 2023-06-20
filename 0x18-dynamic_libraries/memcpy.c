#include "main.h"

/**
 * _memcpy - Main function that copys memory area
 * @dest: The memory area destination to copy
 * @src: The memory area source to copy from
 * @n: The number of bytes
 * Return: (pointer to copy location)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *begin = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (begin);
}
