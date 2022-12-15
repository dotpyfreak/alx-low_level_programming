#include <stdio.h>

/**
 * main - prints a list of integers from 1 to 100 with a twist
 * Return: fizz if the number is a multiple of 3, buzz for 5
 * and fizzbuzz if number is a multiple of both 3 and 5
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
			printf("FizzBuzz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", a);
	}
}

