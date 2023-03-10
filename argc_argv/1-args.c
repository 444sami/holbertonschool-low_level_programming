#include <stdio.h>
/**
 * main - prints number of arguments passed
 * Return: 0
 * @argc: arg counter
 * @argv: arg vector
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)**argv;
	return (0);
}
