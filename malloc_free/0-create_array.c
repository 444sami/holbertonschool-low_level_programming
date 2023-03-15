#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char of array
 * Return: NULL if size = 0, or if it fails
 * return a pointer to the array if success
 */
char *create_array(unsigned int size, char c)
{
	char *aoc; /* array of characters */
	unsigned int i; /* variable iteradora */

	if (size <= 0)
	{
		return (NULL);
	}

	aoc = malloc(size * sizeof(char));

	if (aoc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		aoc[i] = c;
	}
	return (aoc);
}
