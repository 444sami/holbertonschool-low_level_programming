#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @str: string
 * Return: encoded string
 */
char *leet(char *str)
{
	int i = 0;
	char s2[5] = {'a', 'e', 'o', 't', 'l'};
	char s3[5] = {'4', '3', '0', '7', '1'};
	int n = 0;	

	for (; str[i] != '\0'; i++)
	{
		for (; n < 5; n++)
		{
			if (str[i] == s2[n] || str[i] == s2[n] - 32)
			{
				str[i] = s3[n];
			}
		}
	}
	return (str);
}
