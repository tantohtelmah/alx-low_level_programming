#include "dog.h"

/**
 * init_dog - initialises the variables of struct dog
 * @d: dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: none
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
