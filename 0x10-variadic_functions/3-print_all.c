#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j;
	char *sep = "";

	type_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(ap, format);
	i = 0;
	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j].t != NULL)
		{
			if (format[i] == types[j].t[0])
			{
				printf("%s", sep);
				types[j].f(ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
/**
 * print_char - prints a character
 * @ap: list of arguments
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * print_int - prints an integer
 * @ap: list of arguments
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 *print_float - prints a float
 @ap: list of arguments
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * prin_string - prints a string
 * @ap: list of arguments
 */
void print_string(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
