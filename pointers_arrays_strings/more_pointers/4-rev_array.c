#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: int
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int c, i, j;

	while (a[n] < n)
	{
		n++;
	}

	c = n;

	for (i = 0, j = c - 1; i < j; i++, j--)
	{
		int ch = a[i];

		a[i] = a[j];
		a[j] = ch;
	}
}
