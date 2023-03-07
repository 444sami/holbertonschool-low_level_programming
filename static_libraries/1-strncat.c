#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destiny
 * @src: source
 * @n: bytes
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (; dest[i] != '\0' ; i++)
	{
		;
	}
	for (; j < n && src[j] != '\0' ; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
