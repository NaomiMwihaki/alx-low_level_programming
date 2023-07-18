#include <stdlib.h>
#include "dog.h"
/*
 * free_dog - function that frees a memory
 * allocate to the dog_t structure
 * @d: a pointer to the dog_t structure to be freed
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
