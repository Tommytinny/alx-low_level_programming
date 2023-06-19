#include <stdio.h>

/**
 * main -  prints all possible different combinations of two digits
 * Return: 0 if success
 */
int main(void)
{
	int i, p;

	for (i = 0; i <= 9; i++)
	{
		for (p = i + 1; p <= 9; p++)
		{
			putchar(i + '0');
			putchar(p + '0');
			if (i != 8 || p != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
