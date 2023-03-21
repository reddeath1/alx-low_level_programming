#include <unistd.h>
#include "main.h"

/**
 * main - body
 * decription: function
 * return
 */

void print_alphabet(void)
{
	char c = 'a';

        while ( c <= 'z')
        {
                _putchar(c);
		c++;
        }
        _putchar('\n');

}
