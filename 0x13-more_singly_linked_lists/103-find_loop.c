#include "lists.h"

/**
 * find_listint_loop - Main function to find the loop in a list
 * @head: Pointer to listint_t structure
 * Return: (address of the node where the loop start, or NULL)
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head, *second = head;

	while (first && second && second->next)
	{
		first = first->next;
		second = second->next->next;
		if (first == second)
		{
			return (first);
		}
	}
	return (NULL);
}
