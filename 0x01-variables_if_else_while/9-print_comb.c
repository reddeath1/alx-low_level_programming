#include<stdio.h>
/**
 * main - main bloc
 *
 * Return: always
 */

int main(void)
{
	int chars;

	for (chars = 0; chars < 10; chars++)
	{
		putchar(chars + '0');
		if (chars != 9){
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
