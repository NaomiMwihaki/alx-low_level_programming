#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * Return: newly allocated pointer,otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *result;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	result = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < len2; j++)
		result[len1 + j] = s2[j];
	result[len1 + len2] = '\0';
	return (result);
}
