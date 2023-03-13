#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @i: pointer to string
 * Return: i
 */
char *string_toupper(char *i)
{
	int p = 0;

	for (; i[p] != '\0'; p++)
	{
		if (i[p] <= 'z' && i[p] >= 'a')
		{
			i[p] = i[p] - 32;
		}
	}
	return (i);
}
