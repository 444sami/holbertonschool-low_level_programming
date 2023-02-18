#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number
 * Return: 1 if greater than zero, 0 if zero, -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43); /** ascii code for + = 43*/
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(45); /**ascii code for - = 45*/
	}
	return (-1);
}
