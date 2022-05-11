#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize as well
 * @d: pointer to struct dog to initialize
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	return;

else
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
