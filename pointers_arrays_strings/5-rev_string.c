#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input to reverse
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int c, i, j, temp;

	while (s[c] != NULL)
	{
		c++;
	}
	for (i = 0, j = c - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
