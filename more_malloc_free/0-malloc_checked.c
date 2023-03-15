#include "main.h"

/**
 * malloc_checked - allocates memory depending of the type
 * @b: length of the array
 * Return: point on success, 98 on fail
 */

void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
