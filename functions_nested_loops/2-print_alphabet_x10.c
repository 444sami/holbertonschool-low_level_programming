#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * in lowercase, followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int chars;
	int time = 0;

	while (time < 10)
	{
		for (chars = 97; chars <= 122; chars++)
		{
			_putchar(chars);
		}
		time++;
	}
	_putchar(10);
}
