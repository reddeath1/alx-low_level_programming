#include "main.h"

/**
 * _strlen -  Main function that returns the length of a string.
 * @s: The input string
 * Return: (Nothing)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
