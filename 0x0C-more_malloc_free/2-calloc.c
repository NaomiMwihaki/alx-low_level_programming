#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * memset - fill the memory with constant byte
 * @nmemb: elements of an array
 * @size: no of bytes
 * @ptr: Pointer
 * Return: a pointer to an array or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 && size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
		if (ptr == NULL)
		{
			return (NULL);
		}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
