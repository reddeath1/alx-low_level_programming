#include "main.h"

/**
 * _strpbrk -  Main function that searches a string for any of a set of bytes.
 * @s: The input string
 * @accept: The input character to locate into string s
 * Return: (Always)
*/
char *_strpbrk(char *s, char *accept)
{
	char *begin = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = begin;
		s++;
	}
	return (NULL);
}
