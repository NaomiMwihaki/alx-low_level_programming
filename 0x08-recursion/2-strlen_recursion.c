#include "main.h"
/**
 * _strlen_recursion - returns the full length of a string
 * @s: the string to be checked
 * Return: length of a string *s
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
