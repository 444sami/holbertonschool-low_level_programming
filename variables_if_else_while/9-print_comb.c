#include <stdio.h>
/**
 * main - no comment
 *
 * Return: 0
 */
int main(void)
{
	int num = '0';

	for (; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');	/** numbers must be separated by , */
			putchar(' ');	/** followed by a space */
		}
	}
	putchar('\n');
	return (0);
}
