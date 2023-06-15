#include "lists.h"

/**
 * insert_dnodeint_at_index - Main function that inserts a node at
 * position in a list.
 * @h: A double pointer to the head.
 * @idx: index to insert node at.
 * @n: data to add to a node.
 * Return: (pointer to new element, or NULL on failure).
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = NULL, *tmp = NULL;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	if (!h || !(*h))
		*h = node;
	else
	{
		tmp = *h;
		while (idx != i++ && tmp->next)
			tmp = tmp->next;
		if (tmp->next)
			node->prev = tmp->prev;
		else
			node->prev = tmp;
		if (idx == i)
			tmp->next = node, node->prev = tmp;
		else if (idx == i - 1)
		{
			if (tmp->prev)
				tmp->prev->next = node;
			else
				*h = node;
			tmp->prev = node;
			node->next = tmp;
		}
		else
		{
			free(node);
			return (NULL);
		}
	}
	return (node);
}
