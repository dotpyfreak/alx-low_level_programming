#include "main.h"

/**
 * _strcpy - copies the string pointed to by src including
 * the terminal null byte (\0) to the buffer pointed to
 * by dest
 * @dest: points to the buffer to hold the string
 * @src: points to the string to be copied
 *
 * Return: the pointer to the dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
