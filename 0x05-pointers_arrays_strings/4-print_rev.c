#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: Character to be printed
 * Return: a reversebstring
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
