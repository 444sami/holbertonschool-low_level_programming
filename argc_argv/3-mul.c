#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: arg counter
 * @argv: arg vector
 * Return: result of mul
 */
int main(int argc, char *argv[])
{
	if (argc != 3) /** if not receive two args*/
	{
		printf("Error\n");  /** program should print Error and return 1 */
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	(void)argc;
	return (0);
}
