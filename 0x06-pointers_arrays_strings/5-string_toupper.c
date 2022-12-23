#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to
 * uppercase
 * @s: any given string
 * Return: all leters capitalized
 */

char *string_toupper(char *s)
{
	char *sv = s;

	while (*sv != '\0')
	{
		if (*sv >= 97 && *sv <= 122)
		{
			*sv = char (*sv - 32);

		}
	}
	return (s);
}
