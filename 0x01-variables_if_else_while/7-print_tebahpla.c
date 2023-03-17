#include<stdio.h>
/**
 * main - main bloc
 *
 * Return: always
 */

int main(void)
{
	char chars;

	for (chars = 'z'; chars >= 'a'; chars++)
		putchar(chars);
	putchar('\n');
	return (0);
}
