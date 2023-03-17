#include<stdio.h>
/**
 * main - main bloc
 *
 * Return: always
 */

int main(void)
{

	char chars, chaper;

	for (chars = 'a'; chars <= 'z'; chars++)
		putchar(chars);
	for (chaper = 'A'; chaper <= 'Z'; chaper++)
		putchar(chaper);
	putchar('\n');

	return (0);
}
