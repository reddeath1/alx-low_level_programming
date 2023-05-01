#include "lists.h"

/**
 * free_listint_safe - function to frees list
 * @h: Pointer to  listint_t structure
 * Return: The size of the list to free
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp;

	tmp = *h;
	while (tmp)
	{
		tmp = *h;
		tmp = tmp->next;
		_free(tmp);
		count++;
	}
	*h = NULL;

	return (count);
}

/**
 * _free - main funtion to recursively free the list
 * @head: Pointer to the listint_t structure
 * Return: Always
 */
void _free(listint_t *head)
{
	listint_t *tmp;

	if (head)
	{
		tmp = head;
		tmp = tmp->next;
		free(tmp);
		_free(tmp);
	}
	free(head);
}
