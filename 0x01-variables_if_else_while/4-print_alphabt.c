#include <stdio.h>

/**
 * main - prints the letters in lowercase,
 * followed by a new line, except the letters - q and e
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		if (letters != 'e' && letters != 'q')
		{
			putchar(letters);
		}
		letters++;
	}
	putchar('\n');
	return (0);
}
