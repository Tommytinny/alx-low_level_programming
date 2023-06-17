#include <stdio.h>

/**
 * main - Program that prints all numbers of base 16 in lowercase
 * Return: 0 if success
 */
int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}

	digit = 'a';

	while (digit <= 'f')
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');
	return (0);
}
