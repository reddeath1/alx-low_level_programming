#include "main.h"

/**
 * puts2 - main func
 * @str: arg
 * Description: Print 1st char, and even
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
