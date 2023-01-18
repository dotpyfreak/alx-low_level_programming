#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: the struct to be intialized
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 * Return: 0, success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;

		return(d);
	}

}
