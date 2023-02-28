#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elementts of an array of ints
 * @a: array
 * @n: numbers of elements
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}
