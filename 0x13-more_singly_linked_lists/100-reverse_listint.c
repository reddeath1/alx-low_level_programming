#include "lists.h"

/**
 * reverse_listint - Main function that reverses a linked list
 * @head: Pointer to listint_t structure
 * Return: (A pointer to the first node of the reverse list)
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL, *next;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = next;
	}
	*head = last;
	return (*head);
}
