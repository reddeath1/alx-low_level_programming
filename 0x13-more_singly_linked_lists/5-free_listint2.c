#include "lists.h"

/**
 * free_listint2 - Main function to free list and sets head to NULL
 * @head: Pointer to listint_t structure
 * Return: (Always).
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	tmp = *head;
	while (*head)
	{
		tmp = *head;
		(*head) = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
