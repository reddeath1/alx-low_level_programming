#include<stdio.h>
/**
 * main - main bloc
 *
 * Return: always
 */

int main(void)
{
	int ints;

	for (ints = 0; ints <= 10; ints++)
	{
		putchar(ints + '0');
	}
	putchar('\n');
	return (0);
}
