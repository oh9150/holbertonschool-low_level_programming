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
	dog_t *dog = {name, age, owner};
	return (dog);
}
