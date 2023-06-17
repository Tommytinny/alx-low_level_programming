#include <stdio.h>

/**
 * main - Program that prints all possible combination of single-digit numbers
 * Return: 0 if success
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
		if (number == 9)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
