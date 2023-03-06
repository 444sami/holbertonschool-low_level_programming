#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer, or NULL if character not
 * not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (&s[i]);
		}
	}
	if (c == s[i])
	{
		return (&s[i]);
	}
	return (NULL);
}
