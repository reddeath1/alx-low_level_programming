#include "lists.h"

/**
 * add_nodeint - function that adds new node at the begining of a list
 * @head: Pointer to list_t
 * @n: data to be put into the new node
 * Return: address of  new element, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nod;

	nod = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = nod;
	return (*head);
}
