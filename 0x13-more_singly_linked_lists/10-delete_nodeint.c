#include "lists.h"
/**
 * delete_nodeint_at_index - Main function that deletes the node at
 * specified index from list
 * @head: Pointer to listint_t structure
 * @index: index of the node to delete
 * Return: (1 for success or -1 if fails)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *nod;
	unsigned int v = 1;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
	}
	else
	{
		while (v < index)
		{
			tmp = tmp->next;
			if (tmp == NULL)
				return (-1);
			v++;
		}
		nod = tmp;
		nod = nod->next;
		tmp->next = nod->next;
		free(nod);
	}
	return (1);
}
