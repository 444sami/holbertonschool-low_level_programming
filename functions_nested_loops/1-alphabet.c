#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 * followed by a new line
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char chars = 97;

	for (; chars <= 122; chars++)
	{
		_putchar(chars);
	}
	_putchar('\n');
}
