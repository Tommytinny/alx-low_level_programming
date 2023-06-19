#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0 if success
 */
int main(void)
{
	int i, x, p;

	for (i = 0; i <= 9; i++)
	{
		for (x = i + 1; x <= 9; x++)
		{
			for (p = x + 1; p <= 9; p++)
			{
				putchar(i + '0');
				putchar(x + '0');
				putchar(p + '0');

				if (i != 7 || x != 8 || p != 9)
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
