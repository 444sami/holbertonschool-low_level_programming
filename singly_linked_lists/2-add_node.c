#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer
 * @str: string for new list
 * Return: returr pointer to new node, NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = makeNode(str);
	if (!*head)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
