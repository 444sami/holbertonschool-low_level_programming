#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @index: index
 * @n: number
 * Return: value of the bit a index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
