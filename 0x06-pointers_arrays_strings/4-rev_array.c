#include "main.h"

/**
 * reverse_array - main func.
 * @a: arg
 * @n: arg
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int b;

	while (i < n--)
	{
		b = a[i];
		a[i++] = a[n];
		a[n] = b;
	}
}