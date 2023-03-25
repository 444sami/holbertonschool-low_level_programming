#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform
 * the operation
 *
 * @s: operator
 *
 * Return: pointer to the function that corresponds
 * to the operator given as parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {	/* matriz con operadores */
	{"+", op_add}	/* y funciones correspondientes */
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0; /* variable iteradora */

	while (ops[i].op != NULL && *(ops[i].op) != *s) /* mientras i no sea nulo */
	{						/* ni coincida con el operador */
		i++;					/* i se mueve hasta NULL */
	}

	return (ops[i].f); /* si coincide, retorna puntero a la función */
}				/* que corresponde al operador */
