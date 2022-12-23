#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to given string
 * Return: a pointer to string s
 */

char *rot13(char *s)
{
	int i, j;
	char normal_let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_let[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)

	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == normal_let[j])
			{
				s[i] = rot_let[j];
				break;
			}
		}
	}

	return (s);
}
