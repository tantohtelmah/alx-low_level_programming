#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - initialises the variables of struct dog
 * @d: dog_t
 * Return: none
*/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
