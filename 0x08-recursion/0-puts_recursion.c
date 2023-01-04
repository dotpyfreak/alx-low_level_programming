#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: any given string
 * Return: the string entered character by character
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
