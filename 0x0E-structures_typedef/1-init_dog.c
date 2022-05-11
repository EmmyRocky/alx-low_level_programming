#include <stdio.h>
#include "dog.h"

/**
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize as well
 * @d: pointer to struct dog to initialize
 *
 * init_dog - initializes a variable of type struct dog
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
