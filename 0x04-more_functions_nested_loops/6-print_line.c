#include "main.h"

/**
 * print_line - print function
 * Decription:
 * @n: arg
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
