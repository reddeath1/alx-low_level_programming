#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * main - body
 * Decription: putchar
 * Return: always (success)
 */

int main(void)
{
	char str[9] =  "_putchar";
	int i = 0;

	for (; i < 9; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}

