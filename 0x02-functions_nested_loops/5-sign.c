#include "main.h"
/**
 * print_sign - body
 * @n: input
 * Description: function  for if and else
 * Return: always (nu)
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
