#include "lists.h"
/**
 * print_dlistint - print all the elements of a
 * dlistint list
 * @h: pointer
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
