#include "main.h"
/**
 * _strncpy - main func
 * @dest: arg
 * @src: arg
 * @n: arg3
 * Return: always
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i = n;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
