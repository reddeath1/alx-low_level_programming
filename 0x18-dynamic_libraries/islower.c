#include "main.h"

/**
 * _islower - Main function checks if character is lowe or upper.
 * @c: The input character
 * Return: (1 if is lowercase or 0 if is uppercase)
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
