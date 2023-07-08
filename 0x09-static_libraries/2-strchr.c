#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: String to be serached
 * @c: Character to be located
 * Return: if c is located return a pointer
 * to the first occurence if not found return NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
