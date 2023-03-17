#include<stdio.h>
/**
 * main - main bloc
 *
 * Return: always
 */

int main(void)
{

	char chars = 'a';

	while (chars <= 'z')
	{
		putchar(chars);
		chars++;
	}
		putchar('\n');

	return (0);
}
