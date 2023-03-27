#include "main.h"

/**
 * rev_string - main function
 * @str: arg
 */

void rev_string(char *str)
{
	int i, x, b;
	char v;

	for (i = 0; str[i] != '\0'; i++)
		;

	b = i;
	for (i--, x = 0; x < b / 2; i--, x++)
	{
		v = str[x];
		str[x] = str[i];
		str[i] = v;
	}
}
