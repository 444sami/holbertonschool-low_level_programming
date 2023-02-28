#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	int rev;

	for (rev = len - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
