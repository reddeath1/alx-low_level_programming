#include "main.h"

/**
 * _isupper - Main function that checks for uppercase character.
 * @c: The input character
 * Return: (1 if c is uppercase or 0 otherwise)
 */

int _isupper(int c)
{
	char upper = 'A';
	int isupper = 0;

	for (; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
