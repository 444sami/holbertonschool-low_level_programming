#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of n
 * @n: number
 * Return: if n does not have a natural square root,
 * return -1, if success return sqrt
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt_recursion2(n, 0));
}
/**
 * _sqrt_recursion2 - aux function
 * suma 1 a i hasta encontrar un numero
 * q multiplicado x si mismo = n
 * @n: number
 * @i: square root of n
 * Return: i
 */
int _sqrt_recursion2(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_recursion2(n, i + 1));
}
