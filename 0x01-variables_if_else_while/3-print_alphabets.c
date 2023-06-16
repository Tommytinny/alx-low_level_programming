#include <stdio.h>

/**
 * main - Program that prints alphabet in lowercase and then in uppercase
 * Return: 0 if success
 */
int main(void)
{
	char lowerC = 'a';
	char upperC = 'A';

	while (lowerC <= 'z')
	{
		putchar(lowerC);
		lowerC++;
	}

	while (upperC <= 'Z')
	{
		putchar(upperC);
		upperC++;
	}

	putchar('\n');
	return (0);
}
