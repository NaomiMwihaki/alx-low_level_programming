#include "main.h"
/**
 * _strcat -  concatenates two strings
 * @src:  Source of string
 * @dest: Destination of string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int string_length, z;

	string_length = 0;

	while (dest[string_length] != '\0')
	{
		string_length++;
	}
	for (z = 0; src[z] != '\0'; z++, string_length++)
	{
		dest[string_length] = src[z];
	}
	dest[string_length] = '\0';
	return (dest);
}

