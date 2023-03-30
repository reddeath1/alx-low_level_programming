#include "main.h"
/**
 * _strcmp - main func
 * @s1: arg1
 * @s2: arg
 * Return: always
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}

	return (*s1 - *s2);
}

