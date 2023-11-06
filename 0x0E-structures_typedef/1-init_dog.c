#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize type struct dog variable.
 * @d: initializing struct dog
 * @name: Name of dog
 * @age: Age of the dog
 * @owner: Owner of dog
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
