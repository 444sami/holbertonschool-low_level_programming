<h1 align="center">C - Function pointers project</h1>

<h2 align="center">Learning Objectives</h2>
<h3>At the end of this project, you are expected to be able to explain to anyone, without the help of Google:</h3>

→What are function pointers and how to use them

→What does a function pointer exactly hold

→Where does a function pointer point to in the virtual memory

<details>
<summary align=center>Calculadora anotaciones</summary>

<h3>3-calc.h <b>(prototipos y estructura)</b></h3>

* Definir calc.h

* Incluir librerías

* Añadir estructura:

<code>typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
</code>

* Añadir prototipos:

<code>int op_add(int a, int b);</code>

<code>int op_sub(int a, int b);</code>

<code>int op_mul(int a, int b);</code>

<code>int op_div(int a, int b);</code>

<code>int op_mod(int a, int b);</code>

<code>int (*get_op_func(char *s))(int, int);</code>


<h3>3-op_functions.c <b>(funciones)</b></h3>

op_add: suma de a más b.

op_sub: resta de a menos b.

op_mul: multiplicación de a por b.

op_div: división entre a y b.

op_mod: resto de la división entre a y b.

<h3>3-get_op_func.c <b>(función que selecciona la función que debe ser ejecutada)</b></h3>

* Prototipo: <code>int (*get_op_func(char *s))(int, int);</code>

* Añadir matriz con cada operador y funcion:

<code>op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
</code>

* Return: puntero a la función que corresponde al operador (*s) dado como parámetro.

<h3>3-main.c</h3>

usar atoi para convertir argumentos a int:

<code>int num1 = atoi(argv[1])</code>

<code>int num2 = atoi(argv[3])</code>

<code>char *operador = argv[2]</code>

print ERROR:
si el número de argumentos != 4, <b>exit 98</b>

si el operador no es ninguno de los declarados, <b>exit 99</b>

si se intenta dividir (/, %) entre 0, <b>exit 100</b>
</details>
