#include "3-calc.h"
/**
 * main - main function
 * @argc: args counter
 * @argv: args vector
 * Return: results
 */
int main(int argc, char **argv)
{
	int n1, n2, result, operador;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);	/* atoi= pasa los argumentos a enteros */
	n2 = atoi(argv[3]);
	operador = argv[2][0];

	f = get_op_func(argv[2]);

	if (!f || argv[2][1] != '\0')
	{
		printf("Error\n");	/* si el operador no es ninguno de */
		exit(99);		/* los declarados, error 99 */
	}
	if (n2 == 0 && (operador == '/' || operador == '%'))
	{
		printf("Error\n");	/* si se intenta dividir entre 0 */
		exit(100);		/* error 100 */
	}
	result = f(n1, n2);
	printf("%d\n", result);

	return (0);
}
