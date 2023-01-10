#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter
 * @str: any given string
 * Return: NULL if str == NULL, else returns a pointer
 * to the duplicated string
 */

char *_strdup(char *str)
{
	char *cpy;
	unsigned int a, b;

	a = 0;
	b = 0;

	if (str == NULL)
		return (NULL);

	while (str[a])
		a++;

	cpy = malloc(sizeof(char) * (a + 1));

	if (cpy == NULL)
		return (NULL);

	while ((cpy[b] = str[b]) != '\0')
		b++;
	return (cpy);
}
