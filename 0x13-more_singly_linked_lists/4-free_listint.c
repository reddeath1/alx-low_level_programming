#include "lists.h"

/**
 * free_listint - Main function free linked list
 * @head: Pointer to listint_t structure
 * Return: (Always)
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
