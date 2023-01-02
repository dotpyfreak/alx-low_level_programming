#include "main.h"

/**
 * _memset - fill memory with constant byte
 * @s: a pointer to the memory area
 * @b: constant byte to be filled with
 * @n: first number of bytes of the memory area pointed to by s
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > i)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
