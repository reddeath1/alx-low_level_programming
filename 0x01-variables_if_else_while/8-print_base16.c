#include<stdio.h>
/**
 * main - main bloc
 *
 * Return: always
 */

int main(void)
{
	int chars;

	for (chars = 0; chars < 16; chars++)
		if (chars < 10)
			putchar(chars + '0');
		else
			putchar('a' + (chars - 10));

	putchar('\n');
	return (0);
}
