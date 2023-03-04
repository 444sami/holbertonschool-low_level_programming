#include "main.h"
/**
 * *_strcmp - compares two strings
 *@s1: pointer to string1
 *@s2: pointer to string2
 *Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
