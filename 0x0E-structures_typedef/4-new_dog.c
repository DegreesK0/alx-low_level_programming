#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* new_dog - new function
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: new struct
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = (dog_t *)malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);
	new->name = strdup(name);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->age = age;
	new->owner = strdup(owner);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	return (new);
}
