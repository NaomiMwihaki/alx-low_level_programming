#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - a function that creates
 * a new dog
 * @name: name to be copied
 * @age: dogs age
 * @owner: owners name to be copied
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	new_dog_ptr = malloc(sizeof(new_dog_ptr));
	if (new_dog_ptr == NULL)
		return (NULL);
	new_dog_ptr->name = strdup(name);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
			return (NULL);
	}
	new_dog_ptr->owner = strdup(owner);

	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
			return (NULL);
	}
	new_dog_ptr->age = age;
	return (new_dog_ptr);
}
