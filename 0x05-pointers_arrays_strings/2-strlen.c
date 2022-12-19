#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: any given string
 * Return: Return the lenth of the given string
 */

int _strlen(char *s);
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);
}
