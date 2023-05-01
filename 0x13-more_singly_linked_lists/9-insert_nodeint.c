#include "lists.h"

/**
 * insert_nodeint_at_index - Main function that inserts node to a specific index
 * @head: A pointer to listint_t structure
 * @idx: index of the list
 * @n: data for new node
 * Return: (address to a node at specified index, or NULL if failed)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 1;
	listint_t *nod, *tmp;

	if (head == NULL)
		return (NULL);

	nod = malloc(sizeof(listint_t));
	if (nod == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = nod;
		nod->next = NULL;
		nod->n = n;
		return (nod);
	}

	if (idx == 0)
	{
		nod->next = *head;
		nod->n = n;
		*head = nod;
		return (nod);
	}

	tmp = *head;
	while (x < idx)
	{
		tmp = tmp->next;
		x++;
	}

	nod->n = n;
	nod->next = tmp->next;
	tmp->next = nod;
	return (nod);
}
