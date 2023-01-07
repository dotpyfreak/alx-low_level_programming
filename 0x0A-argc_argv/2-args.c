#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: argument counter
 * @argv: array of strings housing the arguments received
 * Return: one argument per line
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i > argc; i++)
		printf("%s\n", argv[i];)
	return (0);
}
