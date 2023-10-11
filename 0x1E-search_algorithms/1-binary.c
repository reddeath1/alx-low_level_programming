#include "search_algos.h"

/**
 * binary_search - The main function for the linear search algorithm for arrays.
 * @array: A pointer to inputed array.
 * @size: The size of array.
 * @value: The value to search for.
 * Return: The index of the value into the array.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, v = 0, l = 0, r = size - 1;

	if (!array || size <= 0)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i < r)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		v = (l + r) / 2;
		if (array[v] < value)
			l = v + 1;
		else if (array[v] > value)
			r = v - 1;
		else
			return (v);
	}
	return (-1);
}
