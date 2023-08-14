#include "dog.h"
#include <stdlib.h>
/**
 * free_dog -  function that frees dogs
 * @d: dog to be freed
 */


void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
