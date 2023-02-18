#include "main.h"
/**
 * print_last_digit - prints the last digit of a num
 * @num: number
 * Return: last digit
 */
int print_last_digit(int num)
{
	int aux, last_d = num % 10;

	if (last_d < 0)
	{
		last_d = -last_d;
	}
	_putchar(aux = '0' + last_d);
	return (last_d);
}
