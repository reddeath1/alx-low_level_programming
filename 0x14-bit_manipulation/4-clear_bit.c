#include "main.h"

/**
 * clear_bit - Main function that sets a bit to a given index
 * @n: The number to set bit in
 * @index: The index to set bit at
 * Return: 1 if it worked, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int maxbit = 0x01;

	maxbit = ~(maxbit << index);
	if (maxbit == 0x00)
		return (-1);
	*n &= maxbit;
	return (1);
}
