#include "main.h"

/**
 * print_diagonal - print function
 * Decription:
 * @n: arg
 */

void print_diagonal(int n)
{
	int i = 0, b = 0, c;

	while (i < n)
	{
		c = b;

		while (c > 0)
		{
			_putchar(' ');
			c--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
		n--;
	}

	if (i < 1)
		_putchar('\n');
}
