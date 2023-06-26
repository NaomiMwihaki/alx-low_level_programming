#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Input string.
 */
void puts_half(char *str)
{
	int length = 0;
	int half_length;
	int i;

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Calculate the half length */
	half_length = (length - 1) / 2;

	/* Print the second half of the string */
	for (i = half_length + 1; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}

