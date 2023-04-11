#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: converted number, or 0 if one or more chars in the
 * string that is not 0 or 1, or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;

	if (!b)
	{
		return (0);
	}
	for (; *b; b++)
	{
		converted <<= 1;

		if (*b == '1')
		{
			converted |= 1;
		}
		else if (*b != '0')
		{
			return (0);
		}
	}
	return (converted);
}
