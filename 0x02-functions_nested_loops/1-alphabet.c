#include <unistd.h>
#include "main.h"

/**
 * main - body
 * decription: function
 * return
 */

int main(void)
{
	char c = 'a';

	while ( c < 'z')
	{
		print_alphabet(c);
	}
	_putchar("\n");

	return (0);
}
