#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 * Return: NULL if it fails, pointer if success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a, b;
	int c, d;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (d = 0; s1[d] != '\0'; d++)
	{
		;
	}
	for (a = 0; s2[a] != '\0' && a < n; a++)
	{
		;
	}
	p = malloc(((d + a) + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (c = 0; s1[c] != '\0'; c++)
	{
		p[c] = s1[c];
	}
	for (b = 0; s2[b] != '\0' && b < n; b++)
	{
		p[c] = s2[b];
		c++;
	}
	p[c] = '\0';
	return (p);
}
