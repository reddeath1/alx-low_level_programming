#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - body
 * Decription: function main objective  is to print alphabet
 * return: always
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	for (; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
