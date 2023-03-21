#include "main.h"
/**
 * times_table - main body
 * Description: always
 */

void times_table(void)
{
	int a, b, n;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			n = a * b;

			if ((n / 10) == 0)
			{
				if (b != 0)
					_putchar(' ');
				_putchar(n + '0');

				if (b == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				if (b == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

