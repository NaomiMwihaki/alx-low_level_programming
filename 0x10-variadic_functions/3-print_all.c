#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print "(nil)" instead)
 *          Any other char should be ignored.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0;
	char *str;

	va_start(list, format);
	while (format && format[i])
	{
	switch (format[i])
	{
	case 'c':
	printf("%c", va_arg(list, int));
	break;
	case 'i':
	printf("%d", va_arg(list, int));
	break;
	case 'f':
	printf("%f", va_arg(list, double));
	break;
	case 's':
	str = va_arg(list, char *);
	if (str != NULL)
	printf("%s", str);
	else
	printf("(nil)");
	break;
	default:
	break;
	}
	if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's'))
	printf(", ");
	i++;
	}
	va_end(list);
	printf("\n");
}
