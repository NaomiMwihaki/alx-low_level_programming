#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line.
 * @str: character we are referencing
 * Return: 0
 */
void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
			z++;
	}
	_putchar('\n');
}
