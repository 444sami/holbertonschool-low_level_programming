#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: destiny
 * @src: source
 * @n: bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int q = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[q];
		q++;
	}
	return (dest);
}
