#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;

}
