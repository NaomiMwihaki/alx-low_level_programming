#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of intergers
 * @min: minimum interger
 * @max: maximum interger
 * @ptr: a pointer
 * @size: size of array
 *
 *Return: a pointer or a NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int size, i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;


	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
