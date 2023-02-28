#include "main.h"
/**
 * puts2 - prints every other char of a string
 * @str: string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; str[i]++)
	{
		if ((str[i] % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;	/* si no uso 'continue' el loop se romperá */
		}			/* llegará a printear 2 y al ser múltiplo */
	}				/* no seguirá printeando 4, 6, 8..*/
	_putchar(10);
}
