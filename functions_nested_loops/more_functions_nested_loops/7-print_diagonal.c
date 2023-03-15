#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: height
 * Return: line
 */
void print_diagonal(int n)
{
	int x; /* printea las diagonales */
	int y; /* printea los espacios */

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');	/* mientras y no esté posicionado al	*/
			}			/* final de la diagonal, printea los	*/
			_putchar(92);		/* espacios.				*/
			_putchar('\n');		/* mientras x < n (la altura    */
		}				/* de la diagonal) imprime '\'  */
	}					/* y salto de línea             */
}
