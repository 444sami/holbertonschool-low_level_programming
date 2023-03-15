#include "main.h"
/**
 * _isdigit - checks for a digit, 0 - 9
 * @c: digit?
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57) /* ASCII 48 = 0, 57 = 9 */
	{
		return (1);
	}
	return (0);
}
