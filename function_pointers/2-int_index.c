#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to the function to be
 * used to compare values
 *
 * Return: index of first element
 * if no element matches or if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp)
	{
		if (array)
		{
			if (size <= 0)
			{
				return (-1); /* return -1 if size <= 0 */
			}
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i])) /* si cmp compara i en el array */
				{			/* y coincide */
					return (i);	/* return index of first element */
				}
			}
		}
	}
	return (-1); /* return -1 if no element matches */
}
