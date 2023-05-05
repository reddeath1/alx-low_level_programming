#include "main.h"

/**
 * get_endianness - Main function that checks endianness
 * Return: (0 if big endian, 1 if little endian)
 */
int get_endianness(void)
{
	unsigned int v = 1;
	char *c = (char *)&v;

	if (*c)
		return (1);
	return (0);
}
