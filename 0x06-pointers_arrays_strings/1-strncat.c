#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest - destination of string
 * @src - source of string
 * @n - number of bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_string, z;

	length_string = 0;

	while (dest[length_string] != '\0')
	{
		length_string++;
	}
	for (z = 0; z < n && src[z] != '\0'; z++, length_string++)
	{
		dest[length_string] = src[z];
	}
	dest[length_string] = '\0';
	return (dest);
}
