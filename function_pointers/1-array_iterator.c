#include "function_pointers.h"
/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 *
 * @array: array
 * @size: size of array
 * @action: pointer to function to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action) /* si action existe */
	{
		if (array)
		{
			for (i = 0; i < size; i++) /* i recorre array */
			{
				(action)(*array); /* ejecuta la función action dada como */
				array++;	/* parámetro en cada elemento del array */
			}			/* hasta llegar a size (final del array) */
		}
	}
}
