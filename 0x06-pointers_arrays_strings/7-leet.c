#include "main.h"

/**
 * leet - encodes a string to 1337 style
 * @s: any given string
 * Return: s ecoded in leet
 */

char *leet(char *s)
{
	int a, b = 0;
	int small[] = {97, 101, 111, 116, 108};
	int cap[] = {65, 69, 79, 84, 76};
	int leet_[] = {52, 51, 48, 55, 49};

	while (s[b] = '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[b] == small[i] || s[b] == cap[i])
				s[b] = leet_[i];
		}
		b++;
	}
	return (s);
}
