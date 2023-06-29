#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @z: Pointer to string
 * Return: Pointer to string (z)
 */
char *cap_string(char *z)
{
	int string_length;

	string_length = 0;

	while (z[string_length] != '\0')
	{
		if (z[0] >= 97 && z[0] <= 122)
		{
		z[0] = z[0] - 32;
		}
	if (z[string_length] == ' ' ||
	    z[string_length] == '\t' ||
	    z[string_length] == '\n' ||
	    z[string_length] == ',' ||
	    z[string_length] == ';' ||
	    z[string_length] == '.' ||
	    z[string_length] == '!' ||
	    z[string_length] == '?' ||
	    z[string_length] == '"' ||
	    z[string_length] == '(' ||
	    z[string_length] ==  ')' ||
	    z[string_length] == '{' ||
	    z[string_length] == '}')
	{
	if (z[string_length + 1] >= 97 && z[string_length + 1] <= 122)
	{
	z[string_length + 1] = z[string_length + 1] - 32;
	}
	}
	string_length++;
	}
	return (z);
}
