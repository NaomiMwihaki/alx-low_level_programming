#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: number of intergers passed
 * to the arguement
 * @separator: The string to be printed between numbers.
 * If NULL, no separator is printed.
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
	if (separator != NULL && i != (n - 1))
	{
		printf("%s", separator);
	}
	}
	va_end(list);
	printf("\n");
}
