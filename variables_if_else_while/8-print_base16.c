#include <stdio.h>
/**
 * main - no comment
 *
 * Return: 0
 */
int main(void)
{
	int num = '0';
	char chars;

	for (; num <= '9'; num++)
	{
		putchar(num);
	}
	for (chars = 97; chars <= 102; chars++)
	{
		putchar(chars);
	}
	putchar('\n');
	return (0);
}

