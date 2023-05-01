#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Main function that print to elements in a  list
 * @head: Pointer to listint_t structure
 * Return: (number of nodes. Exits with 98 if failed)
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t elements = 0;
	const listint_t *first = head, *second = head;

	if (head == NULL)
		exit(98);

	while (first && second && second->next && head)
	{
		first = first->next;
		second = second->next->next;
		if (first == second)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		elements++;
	}
	head = NULL;
	return (elements);
}
