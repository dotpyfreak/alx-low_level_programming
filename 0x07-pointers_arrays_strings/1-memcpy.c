#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: the memory area receiving n bytes from src
 * @src: the memory area from which n bytes will be copied
 * @n: the  number of bytes to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (int i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
