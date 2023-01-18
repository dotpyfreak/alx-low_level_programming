#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints all the info in a struct dog
 * @d: struct dog
 * Return: 0, success
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: ", d->name);
		else
			printf("Name: (nil)");
		if (d->age != NULL)
			printf("Age: ", d->age);
		else
			printf("Age: (nil)");
		if (d->owner != NULL)
			printf("Owner: ", d->owner);
		else
			printf("Owner: (nil)");
	}
}
