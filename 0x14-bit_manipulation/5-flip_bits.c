#include "main.h"

/**
 * flip_bits - Main function that gets number of bits to flip
 * @n:  arg bit flips are needed to equal m for n
 * @m: number to set other equal
 * Return:( flifed number  fliped bits)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int xorr = (n ^ m);
	unsigned long int maxbit = 0x01;

	while (maxbit <= xorr)
	{
		if (maxbit & xorr)
			flips++;
		maxbit <<= 1;
	}
	return (flips);
}
