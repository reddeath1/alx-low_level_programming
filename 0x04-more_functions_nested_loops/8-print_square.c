#include "main.h"

/**
 * print_square - print main
 * @size: input
 * Description: Can only use _putchar to print. Use '#' to print square.
 */

void print_square(int size)
{
	int i, e;

	i = 0;

	if (size < 1)
		_putchar('\n');

	while (i < size)
	{
		e = 0;
		while (e < size)
		{
			_putchar('#');
			e++;
		}
		_putchar('\n');
		i++;
	}
}
