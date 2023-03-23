#include "dog.h"

/**
 * new_dog - creates dogs
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Descripion: creates a dog and assigns it an owner and a name
 *
 * Return: the new dog (struct) or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *new_dog_point = &new_dog;

	new_dog_point->name = name;
	new_dog_point->age = age;
	new_dog_point->owner = owner;

	return (new_dog_point);
}
