#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factor of any given number
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int n;

	n = 612852475143;

	long int div = 2, ans = 0, maxi;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxi = n;
			n = n / div;
			if (n == 1)
			{
				printf("%d", maxi);
				printf("\n")
				ans = 1;
				break;
			}


	return (0);
	}

}

}
