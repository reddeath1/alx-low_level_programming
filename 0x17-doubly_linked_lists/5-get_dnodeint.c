#include "lists.h"

/**
 * get_dnodeint_at_index - Main function that gets a node at index
 * @head: A pointer to head of list to lookthrough
 * @index: index of node to look
 * Return: (Always)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head)
	{
		if (x++ == index)
			break;
		head = head->next;
	}
	return (head);
}
