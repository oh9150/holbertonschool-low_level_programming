#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: dog's traits
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
