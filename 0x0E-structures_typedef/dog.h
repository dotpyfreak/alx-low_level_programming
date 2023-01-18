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
void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(const char *str);
ar *_strcopy(char *dest, char *src);
#endif /* _DOG_H */
