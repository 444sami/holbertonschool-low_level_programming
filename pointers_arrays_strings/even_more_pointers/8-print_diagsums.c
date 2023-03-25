#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of
 * a square matrix of integers
 * @a: pointer
 * @size: size of matrix
 * Return: sum of diagonals
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(i * size) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
