#include "main.h"
/**
 * puts_half - prints half a string
 * @str: string
 */
void puts_half(char *str)
{
	int len = 0;
	int i, n;

	len = _strlen(str);

	n = ((len) / 2);

	if ((len % 2) == 1)
	{
		n = ((len + 1) / 2);
	}
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
#include "main.h"
/**
 * _strlen - return length of string
 * @s: pointer
 * Return: length (int)
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
		;
	return (count);
}
