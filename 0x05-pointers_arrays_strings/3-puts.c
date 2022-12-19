#include "main.h"

/**
 * _puts - send a string to stdout followed by a newline character
 * @str: the address of any given string
 * Return: prints the string to standard output
 */

void _puts(char *str)
{
	int x;
	int n = 0;

	while (str[n] != '\0')
	{
		x = str[n];
		putchar(x);
	}
	putchar('\n');
}
