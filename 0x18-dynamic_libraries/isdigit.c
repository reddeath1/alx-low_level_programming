#include "main.h"

/**
 * _isdigit - Main function that checks for a digit from 0 through 9).
 * @c: An input integer
 * Return: (1 if c is a digit or 0 otherwise)
 */
int _isdigit(int c)
{
	char i = '0';
	int digit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			digit = 1;
			break;
		}
	}

	return (digit);
}
