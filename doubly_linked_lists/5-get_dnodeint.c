#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 * of a list
 * @head: head pointer to the list
 * @index: index
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head)
	{
		while (index != 0 && head)
		{
			head = head->next;
			index--;
		}
		return (head);
	}
	return (NULL);
}
