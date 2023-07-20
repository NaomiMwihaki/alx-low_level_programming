#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all parameters
 * @n: the number of arguements passed
 * @...: number of arguements to be added
 * Return: sum of all parametres
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int i = 0;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		sum += va_arg(list, int);
		va_end(list);
	}
	return (sum);
}
