#include "lists.h"

/**
 * pop_listint - Main function to delete the head node of a list
 * and returns the head node data n.
 * @head: Pointer to listint_t structure.
 * Return: (data from deleted head)
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (n);
}
