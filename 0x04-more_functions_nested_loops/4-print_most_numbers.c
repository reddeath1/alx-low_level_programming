#include "main.h"

/**
 * print_most_numbers - print function
 * Decription:
 */

void print_most_numbers(void)
{

	int i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
