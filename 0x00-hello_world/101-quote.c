#include <stdio.h>
#include <unistd.h>
/**
 * main - The function gives an output of \"and that piece
 * of art is useful - Dora Korpar, 2015-10-19
 *
 * Return: Always 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
