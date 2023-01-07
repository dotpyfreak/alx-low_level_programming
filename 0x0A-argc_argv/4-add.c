#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: argument counter
 * @argv: array of strings
 * Return: the sum of the positive numbers
 */

int main(int argc, char *argv[])
{	
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		int n;

		n = atoi(argv[i]);
		if (n > 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
