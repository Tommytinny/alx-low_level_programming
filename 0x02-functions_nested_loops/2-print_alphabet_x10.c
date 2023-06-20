#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10x in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while (i <= 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
