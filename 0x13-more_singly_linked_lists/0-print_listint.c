#include "lists.h"

/**
 * print_listint - main function to prints all elements in the list
 * @h: pointer to list int structure
 * Return: nodes number.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
