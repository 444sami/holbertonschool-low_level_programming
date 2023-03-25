#include "3-calc.h"
/**
 * main - main function
 * @argc: args counter
 * @argv: args vector
 * Return: results
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	char *operador;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);	/* atoi= pasa los argumentos a enteros */
	num2 = atoi(argv[3]);
	operador = argv[2];

	f = get_op_func(argv[2]);
	
	if (!f || argv[2][1] != '\0')
	{
		printf("Error\n");	/* si el operador no es ninguno de */
		exit(99);		/* los declarados, error 99 */
	}
	if (num2 == 0 && (operador == '/' || operador == '%'))
	{
		printf("Error\n");	/* si se intenta dividir entre 0 */
		exit(100);		/* error 100 */
	}
	result = f(num1, num2);
	printf("%d\n", result);

	return (0);
}
