#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
