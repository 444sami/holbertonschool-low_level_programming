#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: index
 * @n: pointer to number
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
