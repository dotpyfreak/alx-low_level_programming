#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: data type
 * Return: Always 0
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
