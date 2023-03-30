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
	char *i;

	/*  Copy up to n bytes of src to dest*/
	i = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';
	return (i);
}
