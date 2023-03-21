#include <stdlib.h>
#include "dog.h"
	/**
	 * init_dog - initializes a variable of type struct dog
	 * @d: pointer to struct dog
	 * @name: name of dog
	 * @age: age of dog
	 * @owner: owner of dog
	 *
	 * Description: This function initializes the values of a struct dog
	 * with the provided name, age, and owner.
	 *
	 * Return: None
	 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
