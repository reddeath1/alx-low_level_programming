#include<stdio.h>
/**
 * main - main bloc
 *
 * Return: always
 */

int main(void)
{
	int chars;

	for (chars = 0; chars < 100; chars++)
	{
		putchar((chars / 10) + '0');
		putchar((chars % 10) + '0');
		if (chars != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
