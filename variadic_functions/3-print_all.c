#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j, n;
	char c, *str;
	float f;
	va_list args;

	va_start(args, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			j = 0;
			switch (format[i])
			{
				case 'c':
					c = va_arg(args, int);
					printf("%c", c);
					j++;
					break;
				case 'i':
					n = va_arg(args, int);
					printf("%d", n);
					j++;
					break;
				case 'f':
					f = va_arg(args, double);
					printf("%f", f);
					j++;
					break;
				case 's':
					str = va_arg(args, char *);
					while (str == NULL)
						str = "(nil)";
					printf("%s", str);
					j++; }
			if (format[i + 1] != '\0' && j > 0)
				printf(", ");
			i++; } }
	printf("\n");
	va_end(args); }
