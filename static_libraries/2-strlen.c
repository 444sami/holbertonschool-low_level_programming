#include "main.h"
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
