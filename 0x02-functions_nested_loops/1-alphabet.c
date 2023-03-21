#include <unistd.h>
#include "main.h"

/**
 * main - body
 * Decription: function main objective  is to print alphabet
 * return: always
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
