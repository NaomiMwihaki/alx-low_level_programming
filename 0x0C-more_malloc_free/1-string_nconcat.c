#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes of s2 to concatenate to s1
 * Return: a pointer to the string or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, index;
	char *concat;

	if (s1 == NULL)
	{
		return ("");
	if (s2 == NULL)
		return ("");
	}
		for (index = 0; s1[index]; index++)
		{
			len++;
		}
		concat = malloc(sizeof(char) * (len + 1));
				if (concat == NULL)
				return (NULL);
				len = 0;

				for (index = 0; s1[index]; index++)
					concat[len++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];
	concat[len] = '\0';
	return (concat);
}
