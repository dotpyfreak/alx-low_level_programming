#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: any given string
 * Return: every other character beginning with the first character
 */

void puts2(char *str)
{
	int n = 0;
	int i;

	while (str[n] != '\0')
		n++;
	for (i = 0; i < n; i += 2)
		_putchar(str[i]);
}
