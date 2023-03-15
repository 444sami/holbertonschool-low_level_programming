#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 * from 0 to 14
 */
void more_numbers(void)
{
	int time = 0;
	int num;

	for (; time < 10; time++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar(10);
	}
}
