#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int num, numb;

	for (num = 48; num <= 56; num++)
	{
		for (numb = 49; numb <= 57; numb++)
		{
			if (numb > num)
			{
				putchar(num);
				putchar(numb);
				if (num != 56 || numb != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
