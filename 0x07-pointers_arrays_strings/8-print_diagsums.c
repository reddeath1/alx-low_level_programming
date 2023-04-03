#include "main.h"

/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix of ints
 * @a:arg (array of int types)
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int i, su, si;

	i = 0;
	su = 0;
	si = size * size;
	while (i < si)
	{
		if (i % (size + 1) == 0)
			su += a[i];
		i++;
	}
	printf("%d, ", su);

	su = 0;
	i = 0;
	while (i < si)
	{
		if (i % (size - 1) == 0 && i != (si - 1) && i != 0)
			su += a[i];
		i++;
	}
	printf("%d\n", su);
}
