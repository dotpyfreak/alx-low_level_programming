#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a new type to hold details of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* _DOG_H*/
