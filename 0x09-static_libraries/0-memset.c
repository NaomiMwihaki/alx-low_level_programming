#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: memory to be filled
 * @n: number of times to copy b
 * @b: the character to be copied
 * Return: pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
