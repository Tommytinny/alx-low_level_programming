#include <stdio.h>

/**
 * main - Program that prints the lowercase alphabet in reverse
 * Return: 0 if success
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');
	return (0);
}
