#include "lists.h"

/**
 * sum_dlistint - returns the sum of n value in all nodes
 * @head: head pointer to list
 * Return: sum of all n values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		sum += head->n;
		sum += sum_dlistint(head->next);
	}
	return (sum);
}
