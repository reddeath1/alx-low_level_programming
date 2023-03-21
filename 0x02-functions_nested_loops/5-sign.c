#include "main.h"
/**
 * Return: always 0
 */

int print_sign(int n)
{
	int nu;
	
	if (n > 0)
	{
		nu = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		nu = 0;
		_putchar('0');
	}
	else
	{
		nu = -1;
		_putchar('-');
	}
	return (nu);
}
