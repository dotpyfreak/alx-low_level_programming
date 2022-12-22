#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: the string that is concatenated to
 * @src: the string to be appended
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int n = 0;

	while (dest[n])
		n++;
	int c;

	for (c = 0; src[c]; c++)
		dest[n++] = src[c];

	return (dest);
}
