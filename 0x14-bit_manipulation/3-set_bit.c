#include "main.h"

/**
 * set_bit - Main function that sets a bit at given index 
 * @n: number to set bit in
 * @index: index to set bit at
 * Return: (1 if it worked, or -1 on error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int maxbit = 0x01;

	maxbit <<= index;
	if (maxbit == 0)
		return (-1);
	*n |= maxbit;
	return (1);
}
