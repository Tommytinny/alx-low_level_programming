#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase
 * Return: 0 if success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
