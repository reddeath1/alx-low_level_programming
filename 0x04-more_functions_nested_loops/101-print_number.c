#include "main.h"

/**
 * print_number - prints numbers.
 * @n: input
 * Description: use _putchar to print.
 */

void print_number(int n)
{
	long m;
	int c;
	long nu;

	nu = n;
	if (nu < 0)
	{
		nu *= -1;
		_putchar('-');
	}

	m = 1;
	c = 1;
	while (c)
	{
		if (nu / (m * 10) > 0)
			m *= 10;
		else
			c = 0;
	}


	while (nu >= 0)
	{
		if (m == 1)
		{
			_putchar(nu % 10 + '0');
			nu = -1;
		}
		else
		{
			_putchar((nu / m % 10) + '0');
			m /= 10;
		}
	}
}
