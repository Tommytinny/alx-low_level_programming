#include "main.h"

/**
 * times_table - prints the 9 times table from 0
 * Return: void
 */
void times_table(void)
{
	int i;
	int multiple;

	for (i = 0; i <= 9; i++)
	{
		multiple = 9 * i;
		_putchar((multiple  / 10) + '0');
		_putchar((multiple % 10) + '0');
		_putchar('\n');
	}
}
