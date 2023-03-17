#include<stdio.h>
/**
 * main - main bloc
 *
 * Return: always
 */

int main(void)
{
	int chars;

	for (chars = 0; chars <= 16; chars++)
		putchar(chars + '0');
	putchar('\n');
	return (0);
}
