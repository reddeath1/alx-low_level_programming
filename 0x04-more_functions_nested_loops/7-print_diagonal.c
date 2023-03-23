#include "main.h"

/**
 * print_diagonal - print function
 * Decription:
 * @n: arg
 */

void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('\\');
		_putchar('\n');
		i++;
	}

	_putchar('\n');
}
