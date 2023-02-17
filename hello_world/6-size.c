#include <stdio.h>

/**
 * main - no comment
 *
 * Return: always 0
 * format specifier &zu: size_t type variable
 * returned by sizeof operator
 */
int main(void)
{
	char character;
	int inter;
	long int long_inter;
	long long int ll_inter;
	float decimal;

	printf("size of a char: %zu byte(s)\n", sizeof(character));
	printf("size of an int: %zu byte(s)\n", sizeof(inter));
	printf("size of a long int: %zu byte(s)\n", sizeof(long_inter));
	printf("size of a long long int: %zu byte(s)\n", sizeof(ll_inter));
	printf("size of a float: %zu byte(s)\n", sizeof(decimal));
	return (0);
}
