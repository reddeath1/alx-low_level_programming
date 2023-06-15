#include "lists.h"

/**
 * add_dnodeint_end - Main function that adds a node to the end of list.
 * @head: double pointer to the head.
 * @n: data to add to new node.
 * Return: (The pointer to new element, NULL on failure).
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL, *tmp = NULL;

	node = malloc(sizeof(dlistint_t));
	if (!node)
	{
		free(node);
		return (NULL);
	}
	node->next = NULL;
	node->prev = NULL;
	node->n = n;

	if (!head || !(*head))
	{
		*head = node;
		return (node);
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;

		node->prev = tmp;
		tmp->next = node;

		return (node);
	}
	return (NULL);
}
