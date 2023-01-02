#include "main.h"

/**
 * _strchr - locates a character in a string and prints everything else after
 * @s: any given string
 * @c: any given character
 * Return: a pointer to the first occurrence of the letter
 * or returns NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		if (!*s)
			return ('\0');
	}
	/*if (*s == c)
	 * return (s);
	 */
	return ('\0');
}
