#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: any pointer to a 2d array of chars
 * Return: the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int b, c;

	b = 0;

	for (; b < 8; b++)
	{
		c = 0;
		for (; c < 8; c++)
			_putchar (a[b][c]);
		_putchar ('\n');
	}
}
