/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, d;

	for (a = 48; a < 58; a++)
	{
		for (b = 49; b < 58; b++)
		{
			for (d = 50; d < 58; d++)
			{
				if (d > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(d);
					if (a != 55 || b != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
