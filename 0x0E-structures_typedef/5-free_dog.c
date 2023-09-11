#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - function that frees dogs
 * @d: struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
