#include "main.h"
/**
 * *_strcpy - copies a string pointed by src to
 * the buffer pointed by dest
 * @src: source
 * @dest: destiny
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
