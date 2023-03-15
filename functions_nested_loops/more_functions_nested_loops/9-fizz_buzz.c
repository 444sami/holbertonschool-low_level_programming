#include <stdio.h>
/**
 * main - Fizz-Buzz test
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0) /* multiplies of three and five */
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0) /* multiplies of three */
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0) /* multiplies of five */
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i < 100)
			printf(" "); /* separated by a space */
	}
	printf("\n");
	return (0);
}

