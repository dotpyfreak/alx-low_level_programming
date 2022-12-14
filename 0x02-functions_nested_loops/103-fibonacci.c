#include <stdio.h>

/**
 * main - prints the sum of even-valued terms
 *
 * Return: 0 success
 */

int main(void)
{
	int a;
	unsigned long int b, k, next, sum;

	b = 1;
	c = 2;
	sum = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		next = b + c;
		b = c;
		c = next;
	}

	printf("%lu\n", sum);

	return (0);
}
