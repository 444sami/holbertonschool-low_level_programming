#include "lists.h"
/**
 * dlistint_len - return the number of elements
 * @h: pointer
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
