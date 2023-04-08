#include "lists.h"
/**
 * list_len - return the number of elements
 * @h: pointer first struct
 * Return: number
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = (h->next);
	}
	return (count);
}
