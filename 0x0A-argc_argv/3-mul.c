#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of strings
 * Return: the product followed by a new line, or
 * if the program does not receive two arguments
 * return error and returns 1
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;
	if (argc != 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(agrv[i]);
			printf("%d\n", mul);
		}
	}
}
