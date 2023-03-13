#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: destiny
 * @src: source
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (; dest[i] != '\0'; i++)
	{
		;
	}
	for (; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = src[j];
	return (dest);
}
