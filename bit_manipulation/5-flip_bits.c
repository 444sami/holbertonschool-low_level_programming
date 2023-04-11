#include "main.h"
/**
 * flip_bits - return the number of bits you would need to flip to get
 * from one number to other
 * @n: number
 * @m: flip other number
 * Return: Nothing.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
