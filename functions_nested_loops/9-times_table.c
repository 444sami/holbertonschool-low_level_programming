#include "main.h"
/**
 * times_table -  that prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int coc = 0;
	int div = 0;
	int result;

	for (coc = 0; coc < 10; coc++)
	{
		for (div = 0; div < 10; div++)
		{
			result = coc * div;
			if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (div != 0)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(result + '0');
			}
			if (div != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
