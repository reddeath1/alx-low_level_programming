#include "main.h"

/**
 * _strspn - Main function that gets the length of a prefix substring.
 * @s: The input string
 * @accept: The input character to locate into string s
 * Return: (returns pointer to c position)
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *begin = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = begin;
		if (flag == 0)
			break;
	}
	return (count);
}
