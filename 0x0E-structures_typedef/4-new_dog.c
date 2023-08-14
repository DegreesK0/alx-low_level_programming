#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog
 * @name: the dogs name
 * @age: the dogs age
 * @owner: the dogs owners name
 *
 * Return: newDog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = strdup(name);
	newDog->age = age;
	newDog->owner = strdup(owner);

	/* strcpy(newDog->name, name); */
	/* newDog->age = age; */
	/* strcpy(newDog->owner, owner); */

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
	}

	return (newDog);
}
