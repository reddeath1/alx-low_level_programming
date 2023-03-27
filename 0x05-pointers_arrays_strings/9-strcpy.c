#include "main.h"
/**
 * _strcpy - main func
 * @dest: arg
 * @src: arg
 * Return: always
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
