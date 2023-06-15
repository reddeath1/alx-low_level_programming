#include "lists.h"

/**
 * sum_dlistint - Main function that sums the elements in the list
 * @head: pointer to head of the list
 * Return: (sum or zero)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
