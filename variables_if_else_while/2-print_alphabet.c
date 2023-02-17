#include <stdio.h>
/**
 * main - no comment
 *
 * Return: 0
 */
int main(void);
{
	char chars;

	for (chars = 97; chars <= 122; chars++)	/** ASCII 97 = a, 122 = z*/
	{
		putchar(chars);
		putchar('\n');
	}
	return (0);
}
