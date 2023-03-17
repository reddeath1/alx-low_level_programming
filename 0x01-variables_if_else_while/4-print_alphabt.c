#include<stdio.h>
/**
 * main - main bloc
 *
 * Return: always
 */

int main(void)
{

	char chars;

	for (chars = 'a'; chars <= 'z'; chars++)
		if (chars != 'q' && chars != 'e')
			putchar(chars);
	putchar('\n');

	return (0);
}
