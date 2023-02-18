#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int hou, min;

	for (hou = 0; hou < 24; hou++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hou / 10) + '0');	/**first digit of hour*/
			_putchar((hou % 10) + '0');	/**second digir of hour*/
			_putchar(':');
			_putchar((min / 10) + '0');	/**first digit of minute*/
			_putchar((min % 10) + '0');	/**secod digit of minute*/
			_putchar('\n');
		}
	}
}
