#include "main.h"
/**
 * helper - helps the _sqrt_recursion function
 * @n: input number
 * @c: iterator
 * Return: the square root of the number or -1
 */

int helper(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		return (-1);
	}
	return (0 + helper(n, c + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: any given int
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (helper(n, 2));
}
