#include <stdio.h>
/**
 * main - no comment
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	for (; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar ('\n');
	return (0);
}
