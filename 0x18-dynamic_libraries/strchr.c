#include "main.h"

/**
 * _strchr - Main function that locates a character in a string.
 * @s: The input string to search in
 * @c: The input character to locate
 * Return: (returns pointer to c position)
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
