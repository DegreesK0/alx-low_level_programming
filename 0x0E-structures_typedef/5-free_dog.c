#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees the space taking by dog
 * @d: attributes for dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
