#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Check 
 * @n: A input 
 * Description: finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * from n to 98, followed by a new line.
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
