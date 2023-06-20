#include "main.h"

/**
 * _isalpha - The main function returns 1 if the character is an alpha
 * @c: An input character
 * Return: (1 or 0).
 */
int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
			if (c == lower || c == upper)
				letter = 1;
	}
	return (letter);
}
