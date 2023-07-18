#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the dogs
 * @d: pointer to dog_t struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
