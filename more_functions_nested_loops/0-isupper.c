#include "main.h"
/**
 * _isupper - checks for uppercase letter
 * @c: letter
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)	/*ASCII 65 = A, 90 = Z*/
	{			/* if uppercase, return 1*/
		return (1);
	}
	return (0);
}
