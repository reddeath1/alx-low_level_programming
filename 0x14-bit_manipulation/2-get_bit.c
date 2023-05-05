#include "main.h"

/**
 * get_bit - Main function to get a bit at index
 * @n: arg number to get bit from
 * @index: index where the bit to get at
 * Return: (value of the bit or -1 if an error occured)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int maxbit = 0x01;

	maxbit <<= index;
	if (maxbit == 0)
		return (-1);

	if ((n & maxbit))
		return (1);
	else
		return (0);
}
