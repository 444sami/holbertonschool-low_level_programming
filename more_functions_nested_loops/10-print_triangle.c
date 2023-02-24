#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: triangle
 */
void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				if (y != size && y <= size - x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
