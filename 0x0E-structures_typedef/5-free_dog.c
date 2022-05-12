#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - release the memory
 * @d: array
 * Description: Release memory for struct
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
