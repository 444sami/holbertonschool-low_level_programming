#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer
 * @str: string to be duplicated
 * Return: address of new element of NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *aux = *head;
	int i = 0;

	new = makeNode(str);
	if (!*head)
	{
		*head = new;
	}
	else
		for (; aux->next; i++)
		{
			aux = aux->next;
		}
		aux->next = new;
	return (new);
}
/**
 * makeNode - creates a node for a list
 * @str: string to copy in new node
 * Return: new node
 */
list_t *makeNode(const char *str)
{
	list_t *new = NULL;
	int i = 0;
	char *copy;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (new);
	}

	for (i = 0; str[i]; i++)
		;
	copy = strdup(str);
	if (!copy)
	{
		free(new);
	}
	else
	{
		new->str = copy;
		new->len = i;
		new->next = NULL;
	}
	return (new);
}
