#include <stdio.h>
/**
 * main - no comment
 *
 * Return: 0
 */
int main(void)
{
	char chars;

	for (chars = 97; chars <= 122; chars++)
	{
		if (chars != 113 && chars != 101)
			putchar(chars);
	}
	putchar('\n');
		return (0);
}
