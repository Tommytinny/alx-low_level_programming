#include "main.h"

/**
 * times_table - prints the 9 times table from 0
 * Return: void
 */
void times_table(void)
{
	int i, j;
	int multiple;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			multiple = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (multiple < 10)
				{
					_putchar(' ');
				}
			}
			_putchar((multiple / 10) + '0');
			_putchar((multiple % 10) + '0');
		}
		_putchar('\n');
}
