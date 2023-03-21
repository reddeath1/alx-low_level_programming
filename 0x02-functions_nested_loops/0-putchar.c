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

	while (i < 9)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}

