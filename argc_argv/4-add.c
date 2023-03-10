#include "main.h"
/**
 * main - adss positive numbers
 * @argc: arg counter
 * @argv: arg vector
 * Return: result
 */
int main(int argc, char *argv[])
{
	int num, dig;
	int sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (dig = 0; argv[num][dig]; dig++)
		{
			if (argv[num][dig] < '0' || argv[num][dig] > '9')
			{
				printf("Error\n"); /** if num contain symbols that are */
				return (1);		/** not digits print Error and */
			}				/** return 1 */
		}

		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
