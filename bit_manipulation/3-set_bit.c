#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: index
 * Return: 1 if worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
	{
		return (-1);
	}
	*n |= 1 << index;
	return (1);
}
