#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string to be checked
 * @needle: String to be located
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int index = 0;

	if (*needle == 0)
	return (haystack);
	while (*haystack)
	{
	if (haystack[index] == needle[index])
	{
	do {
	if (needle[index + 1] == '\0')
	return (haystack);
	index++;
	}

	while (haystack[index] == needle[index]);
	}
	haystack++;
	}
	return ('\0');
}
