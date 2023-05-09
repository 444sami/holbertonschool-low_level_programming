#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input to reverse
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int c, i, j, temp;
	
	c = _strlen(s);

	for (i = 0, j = c - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
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
