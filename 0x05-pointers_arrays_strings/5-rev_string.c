#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: a string in reverse form to replace the value passed to
 * the function
 */

void rev_string(char *s)
{
	int a, b;
	char e;

	a = 0;
	while (s[a] != '\0')
		a++;

	for (b = 0; b < a / 2; ++b)
	{
		e = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = e;
	}

}
