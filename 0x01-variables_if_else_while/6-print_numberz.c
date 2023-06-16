#include <stdio.h>
/**
 * main - Program that all digit number of base 10 from 0
 * Return: 0 if success
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}

	putchar('\n');
	return (0);
}

