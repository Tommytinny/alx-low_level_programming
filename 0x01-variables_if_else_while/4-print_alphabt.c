#include <stdio.h>

/**
 * main - Program that prints all alphabet except q and e
 * Return: 0 if success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}

		letter++;
	}
	putchar('\n');
	return (0);
}
