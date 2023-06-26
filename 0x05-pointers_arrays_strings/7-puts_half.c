#include "main.h"
/**
 * puts_half  - prints half of a string, followed by a new line.
 * @str: input string
 */
void puts_half(char *str)
{
        int half_string, full_string;

        full_string = 0;

        while (str[full_string != '\0'])
                full_string++;
        half_string = full_string / 2;

        if (str[full_string % 2 == 1])
                while (half_string < full_string)
                {
                        _putchar(str[half_string]);
                        half_string++;
                }
        _putchar('\n');
}
