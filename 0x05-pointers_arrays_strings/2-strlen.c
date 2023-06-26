#include "main.h"

/**
 * _strlen - function to calculate the lenght of a string;
 *@s : paramemter to be checked;
 *Return: always lenght;
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
