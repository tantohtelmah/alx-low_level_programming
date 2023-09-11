#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - initialises the variables of struct dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: none
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || !owner)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->age = age;
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
		return (NULL);
	strcpy(d->name, name);
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
		return (NULL);
	strcpy(d->owner, owner);
	return (d);
}
