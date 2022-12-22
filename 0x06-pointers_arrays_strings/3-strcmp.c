#include "main.h"

/**
 * _strcmp - compares s1 and s2
 * @s1: any given string
 * @s2: any given string
 * Return: a negative or positive int if s1 is less than or greater than s2 and
 * returns zero if both strings are equal.
 */

int _strcmp(char *s1, char *s2)
{
	unsigned char c1, c2;

	do {
		c1 = *s1++;
		c2 = *s2++;

	if (c1 == '\0')
		return (c1 - c2);
	} while (c1 == c2);

	return (c1 - c2);

}
