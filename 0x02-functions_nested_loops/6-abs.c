#include "main.h"
/**
 * int_abs - computes the absolute value of interger
 * @c: The number to be checked
 * Return: Absolute value of number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
