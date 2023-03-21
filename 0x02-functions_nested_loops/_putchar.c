#include <unistd.h>
/**
 * main - body
 * return: function
 */

int _putchar(char str)
{
	return (write(1,&str, 1));
}

