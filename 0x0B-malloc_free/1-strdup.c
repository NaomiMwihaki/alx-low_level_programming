#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a new string which
 * is a duplicate of the string str
 * @str: string to be duplicated
 * Return: NULL if memory is insufficent and
 * a pointer to a string if otherwise.
 */
char *_strdup(char *str)
{
	int i = 0, j = 1;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j])
	{
		j++;
	}
	s = malloc(sizeof(char) * j + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < j)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
