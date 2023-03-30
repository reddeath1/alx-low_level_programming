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
	int i = 0;

	/*  Copy up to n bytes of src to dest*/
	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	/* Pad dest with null bytes if necessary */
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}

	return (dest);
}
