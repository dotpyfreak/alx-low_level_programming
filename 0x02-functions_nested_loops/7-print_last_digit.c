#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: any given int
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	_putchar(n + '0');

	return (n % 10);
}
