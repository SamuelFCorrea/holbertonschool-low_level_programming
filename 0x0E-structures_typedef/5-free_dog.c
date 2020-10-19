#include "dog.h"

/**
 * free_dog - free dog
 * @d: structure to free
 *
 * Return: none
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
