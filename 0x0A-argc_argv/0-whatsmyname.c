#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name,
 * followed by a new line
 * @argc: the number of strings in argv
 * @argv: an array of strings
 * Return: The program's name
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
