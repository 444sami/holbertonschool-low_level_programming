#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *
 *Return: NULL if fails, pointer if success
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, c, d;
	char *s3; /* pointer to return */

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	s3 = malloc(sizeof(char) * ((a + b) + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < a; c++)
	{
		s3[c] = s1[c];
	}

	for (d = 0; (c + d) < (a + b); d++)
	{
		s3[c + d] = s2[d];
	}

	return (s3);
}
