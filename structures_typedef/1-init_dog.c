#include "dog.h"

/**
 * init_dog - check description
 * @d: the struct
 * @name: a value to initialize
 * @age: a value to initialize
 * @owner: a value to initialize
 *
 * Description: initializes values in the struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
