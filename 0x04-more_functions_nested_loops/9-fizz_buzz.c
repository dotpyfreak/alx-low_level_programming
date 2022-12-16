#include <stdio.h>
#include "main.h"

/**
 * main - prints a list of integers from 1 to 100 with a twist
 * Return: fizz if the number is a multiple of 3, buzz for 5
 * and fizzbuzz if number is a multiple of both 3 and 5
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
			printf(" FizzBuzz");
		else if ((i % 3) == 0 && (i % 5) != 0)
			printf(" Fizz");
		else if ((i % 5) == 0 && (i % 3) != 0)
			printf(" Buzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);

	}
	printf("\n");

	return (0);
}
