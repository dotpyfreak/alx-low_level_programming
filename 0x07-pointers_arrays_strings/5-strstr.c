#include "main.h"

/**
 * _strstr - this function locates a substring
 * @haystack: This is the main string to be examined
 * @needle: This is the substring to be examined
 * Return: a pointer to the beginning of the located substring or NULL
 * if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *hay, *nee;

	while (*haystack != '\0')
	{
		hay = haystack;
		nee = needle;

		while (*nee != '\0' && *haystack == *nee)
		{
			haystack++;
			nee++;
		}
		if (!*nee)
			return (hay);
		haystack++;
	}
	return ('\0');
}
