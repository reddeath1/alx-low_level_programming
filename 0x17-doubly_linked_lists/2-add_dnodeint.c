#include "lists.h"

/**
 * add_dnodeint - Main function that adds a node to the head of the list.
 * @head: double pointer to the head
 * @n: data to add into new node
 * Return: (pointer to new element, or NULL on failure).
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		tmp->prev = node;
		*head = node;
		node->next = tmp;
		return (node);
	}
	return (NULL);
}
