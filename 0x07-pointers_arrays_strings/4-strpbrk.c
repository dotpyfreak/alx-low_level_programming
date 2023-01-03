#include "main.h"

/**
 * _strpbrk - finds the first character in the strings that matches
 * any character specified in the string accept
 * @s: any given string
 * @accept: the set of bytes or string we are searching for in s
 * Return: a pointer to the byte in s that matches one byte un accept, or NULL
 * if no such bytes exists.
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;

	while (s[i] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				return (s + a);
			b++;
		}
		a++;
	}
	return ('\0');
}
