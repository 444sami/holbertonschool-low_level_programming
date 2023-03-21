<h1 align=center>C - Malloc, free project</h1>
<h2>Learning Objectives</h2>
<h3>At the end of this project, you are expected to be able to explain to anyone, without the help of Google:</h3>

→What is the difference between automatic and dynamic allocation

→What is malloc and free and how to use them

→Why and when use malloc

→How to use valgrind to check for memory leak

<details>
<summary align=center>Resumen (español)</summary>
<h3 align=center>El Lenguaje C maneja la memoria de manera <b>estática, automática y dinámica</b> y está dividida en 3 regiones:
<b>Memoria principal, Stack y Heap.</b></h3>

En la <b>memoria principal</b> están las variables <b>ESTÁTICAS, variables globales y el código ejecutable del programa.</b> Ó sea, todos aquellos datos que están presentes desde el comienzo del programa hasta que termina.

* Las variables estáticas preservan su valor durante todo el programa: al salir de una función, éstas mantienen su valor para que cuando se vuelva a llamar a dicha función se pueda acceder al valor que tenía antes de salir (en lugar de ser nuevamente inicializada como ocurriría con una variable local).

* Las variables globales son declaradas en la cabecera del programa, antes de la declaración de funciones y antes del método main. Decimos que son variables globales porque estas variables son conocidas por todas las funciones en el programa.

En el <b>Heap</b> (memoria libre) <b>se almacena memoria dinámica</b> que se utiliza para guardar datos que se crean en el medio de la ejecución de un programa. Aquí podemos <b>asignar, reasignar y liberar espacios de memoria</b> de forma DINÁMICA.

En el <b>Stack se almacenan las variables locales</b> que aparecen y desaparecen en un momento puntual de la ejecución del programa.

* Las variables locales comienzan su existencia cuando la función es llamada y desaparecen cuando la función termina su ejecución, por esta razón se conocen como variables AUTOMÁTICAS.

* Los parámetros de una función también se consideran variables locales.

<h3 align=center>OPERACIONES PARA GESTIONAR MEMORIA</h3>

* <code>void *malloc(size_t size)</code> Es la función para reservar tantos bytes consecutivos de memoria como indica su único parámetro. Devuelve la dirección de memoria de la porción reservada. La memoria no se inicializa a ningún valor.

* <code>void *calloc(size_t nmemb, size_t size)</code> Reserva espacio para tantos elementos como indica su primer parámetro nmemb, y cada uno de ellos con un tamaño en bytes como indica el segundo. En otras palabras, reserva nmemb * size bytes consecutivos en memoria. Al igual que la función anterior devuelve la dirección de memoria al comienzo del bloque reservado. Esta función inicializa todos los bytes de la zona reservada al valor cero.

* <code>void free(void *ptr)</code> Función que dado un puntero, libera el espacio previamente reservado. El puntero que recibe como parámetro esta función tiene que ser el que se ha obtenido con una llamada de reserva de memoria. No es necesario incluir el tamaño. Una vez que se ejecuta esta llamada, los datos en esa porción de memoria se consideran basura, y por tanto pueden ser reutilizados por el sistema.

<details>
<summary align=center>Fuentes</summary>

https://www.aprenderaprogramar.com

https://www.fing.edu.uy/tecnoinf/mvd/cursos/prinprog/material/teo/prinprog-teorico09.pdf

https://ainotes298786558.wordpress.com/2021/07/12/que-es-una-variable-estatica/

https://www.it.uc3m.es/pbasanta/asng/course_notes/ch06s03.html

</details></details>
