#include "lists.h"

/**
 * add_nodeint_end - function to add node to the end of list
 * @head: Pointer to list structure
 * @n: integer data to add into the new node
 * Return: address of the new element, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	if (*head == NULL)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = NULL;
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (node);
}
