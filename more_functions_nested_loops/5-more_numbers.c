#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 * from 0 to 14
 */
void more_numbers(void)
{
	int num, time = 0;

	while (time < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num);
		}
		time++;
		_putchar(10);
	}
}
