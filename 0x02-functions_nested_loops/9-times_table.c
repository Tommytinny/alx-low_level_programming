#include "main.h"

/**
 * times_table - prints the 9 times table from 0
 * Return: void
 */
void times_table(void)
{
	int row, column;
	int product;
	
	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			if (column != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (column == 0)
			{
				_putchar(' ');
			}
			else if (product < 10)
			{
				_putchar(' ');
			}
			else
			{
			_putchar((product / 10) + '0');
			}
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}

