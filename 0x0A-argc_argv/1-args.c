#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the
 * number of arguments passed to it
 * @argc: the number of arguments in argv
 * @argv: an array of strings
 * Return: an int, the number of arguments
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
