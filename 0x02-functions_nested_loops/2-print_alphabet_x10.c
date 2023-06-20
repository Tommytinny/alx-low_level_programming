#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10x in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	char j = 'a';
	int i = 0;

	while (i <= 10)
	{
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
