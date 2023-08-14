#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: NULL\n");
	else
		printf("Name: %s\n", (*d).name);

	printf("Age: %f\n", (*d).age);

	if (d->owner == NULL)
		printf("Owner: NULL\n");
	else
		printf("Owner: %s\n", d->owner);
}

