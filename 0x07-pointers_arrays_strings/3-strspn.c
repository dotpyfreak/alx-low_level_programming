#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: a given string
 * @accept: the given substring
 * Return: the number of bytes in the intial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	a = 0;

	while (s[a] != '\0')
	{
		b = 0;
		c = 1;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c = 0;
				break;
			}
			b++;
		}
		if (c == 1)
			break;
		a++;
	}
	return (a);
}

