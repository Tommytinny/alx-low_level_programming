#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct to be intialized
 * @name: first member to be intialized
 * @age: 2nd member to be initialized
 * @owner: 3rd member to be intialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
