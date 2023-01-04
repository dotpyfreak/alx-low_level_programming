#include "main.h"

/**
 * is_prime - checks if a number is prime
 * @a: any given number
 * @b: iterator
 * Return: 1 if n is a prime number and 0 othewise
 */

int is_prime(unsigned int a, unsigned int b)
{
	if (a % b == 0)
	{
		if (a == b)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(a, b + 1));


}
/**
 * is_prime_number - checks if a number is a prime number
 * @n: any given int
 * Return: 1 if n is a prime number and 0 otherwise
 */

int is_prime number(int n)
{
	if (n == 0 || n < 0 || n == 1)
		return (0);
	return (is_prime(n, 2));
}
