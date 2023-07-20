#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints a string
 * @separator:  string to be printed between the strings
 * if separator is NULL, don’t print it
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *c;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(list, char *);
		if (c == NULL)
			printf("nil");
		else if (c != NULL)
			printf("%s", c);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
