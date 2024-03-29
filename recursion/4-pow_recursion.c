#include "main.h"
/**
 * _pow_recursion - returns the value of x
 * raised to the power of y
 * @x: x
 * @y: y
 * Return: if y < 0 return -1, if success
 * return x raised to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
