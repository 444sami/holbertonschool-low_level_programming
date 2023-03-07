#include "main.h"
/**
 * _abs - computes the absolute value of an int
 * @i: int
 * Return: absolute value
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = (-1) * i;
		return (i);
	}
	else if (i > 0)
	{
		return (i);
	}
	return (0);
}
