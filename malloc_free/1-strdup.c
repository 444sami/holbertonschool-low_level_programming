#include <stdlib.h>
/**
 *_strdup - returns a pointer to a copy of a string
 *@str: initial string
 *
 *Return: NULL if str = NULL, or NULL if insufficient
 * memory available. Returns a pointer if success
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
	}
	p = malloc(sizeof(char) * (j + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
