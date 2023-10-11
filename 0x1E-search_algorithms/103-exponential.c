#include "search_algos.h"

/**
 * interpolation_search - The main function for interpolation search algorithm for arrays.
 * @array: A pointer to inputed array.
 * @size: The size of array.
 * @value: The value to search for.
 * Return: The index of the value into the array.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t a = 0, b = size - 1, v = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (array[a] != array[b])
	{
		v = a + (value - array[a]) * (b - a) / (array[b] - array[a]);
		if (v > size)
		{
			printf("Value checked array[%lu] is out of range\n",
					v);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", v, array[v]);

		if (array[v] < value)
			a = v + 1;
		else if (value < array[v])
			b = v - 1;
		else
			return (v);
	}

	if (value == array[a])
		return (a);

	return (-1);
}
