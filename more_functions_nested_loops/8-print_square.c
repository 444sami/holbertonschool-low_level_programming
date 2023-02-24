#include "main.h"
/**
 * print_square - prints a square
 * @size: size of square
 * Return: square
 */
void print_square(int size)
{
	int x = 0;
	int y = 0;

	if (size < 0)
	{
		_putchar(10);
	}
	else
	{
		for (; x < y; x++)
		{
			for (; y < x; y++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
