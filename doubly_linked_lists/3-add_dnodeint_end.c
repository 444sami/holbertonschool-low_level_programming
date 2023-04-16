#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer
 * @n: content
 * Return: address of new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end = NULL;
	dlistint_t *len = *head;

	end = malloc(sizeof(dlistint_t));

	if (!end)
	{
		return (0);
	}
	end->n = n;

	if (!*head)
	{
		(*head) = end;
		end->prev = NULL;
	}
	else
	{
		while (len->next != NULL)
		{
			len = len->next;
		}
		len->next = end;
		end->prev = len;
	}
	end->next = NULL;
	return (*head);
}
