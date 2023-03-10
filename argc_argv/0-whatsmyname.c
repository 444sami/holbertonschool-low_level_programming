#include <stdio.h>
/**
 * main - prints name of program, if renamed print
 * new name without compiling
 * Return: 0
 * @argc: number of arguments passed, arg count
 * @argv: pointer array which points to arguments, arg vector
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
