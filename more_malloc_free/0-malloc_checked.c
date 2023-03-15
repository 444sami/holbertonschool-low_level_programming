#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: lenght of array
 *
 * Return: pointer if success, 98 if fails
 */

void *malloc_checked(unsigned int b)
{
	char *a; /* pointer to return */

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
