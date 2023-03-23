#include "holberton.h"

/**
 * print_square - print main
 * @size: input
 * Description: Can only use _putchar to print. Use '#' to print square.
 */

void print_square(int size)
{
	int i, e;

	e = 0;

	if (size < 1)
		_putchar('\n');

	while (e < size)
	{
		e = 0;
		while (e < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		e++;
	}
}
