#include "main.h"
/**
 * _strpbrk - a function that searches a
 * string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes to be searched
 * Return: if a set is matched return a pointer to the string s
 * if not return NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int index = 0;

	while (*s)
	{
	for (index = 0; accept[index]; index++)
		{
	if (*s == accept[index])
	return (s);
		}
		s++;
	}
	return ('\0');
}
