#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1 - pointer to first string
 * @s2 - pointer to second string
 * Return: a value less than 0 if a string is less than the other
 *         a value more than 0 if a string is more than the other
 *         and 0 if otherwise.
 */
int _strcmp(char *s1, char *s2)
{
	int z, compare_value;

	z = 0;

	while (s1[z] == s2[z] && s1[z] != '\0')
	{
		z++;
	}
	compare_value = s1[z] - s2[z];
	return (compare_value);
}
