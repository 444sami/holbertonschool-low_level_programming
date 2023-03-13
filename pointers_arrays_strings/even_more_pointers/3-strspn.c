#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: substring
 * @accept: pointer
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, n, cont;

	int p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		cont = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				p++;
				cont = 1;
			}
		}
		if (cont == 0)
		{
			return (p);
		}
	}
	return (0);
}
