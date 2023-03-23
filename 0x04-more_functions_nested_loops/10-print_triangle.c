#include "holberton.h"

/**
 * print_triangle -  main function.
 * @size: input
 * Return: Always 0
 */

void print_triangle(int size)
{
	int i = 0, x, n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (x = 0; x < size; x++)
			{
				if (x < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
