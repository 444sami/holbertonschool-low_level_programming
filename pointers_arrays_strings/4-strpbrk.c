#include "main.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: pointer
 * Return: pointer or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int n = 0;

	for (; s[i]; i++)
	{
		for (; accept[n]; n++)
		{
			if (s[i] == accept[n])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
