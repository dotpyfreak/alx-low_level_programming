#include "main.h"

/**
 * _strncat - concatenates two strings but uses at most n bytes
 * @dest: destination string
 * @src: string to be concatenated with dest
 * @n: most number of bytes to be concatenated
 * Return: a pointer to the resulting string, dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, c;

	while (dest[a])
		a++;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[a++] = src[c];

	return (dest);
}
