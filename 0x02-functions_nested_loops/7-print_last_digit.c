#include "main.h"

/**
 * print_last_digit - Check
 * @v: input
 * Description: function that check
 * Return: always n%v()
 */
int print_last_digit(int v)
{
	int n;

	if (v < 0)
		n = -1 * (v % 10);
	else
		n = v % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
