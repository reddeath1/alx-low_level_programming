#include "main.h"

/**
 * _isupper - check upper case or lower
 * @c: input
 * Return: 1 or 0
 */

int _isupper(int c)
{
	int upper = 0;
	if (c > 64 && c < 91)
		upper = 1;

	return (upper);
}
