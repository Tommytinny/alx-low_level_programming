#include "main.h"

/**
 * times_table - prints the 9 times table from 0
 * Return: void
 */
void times_table(void)
{
	int a, r, c, times, counter;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
	_putchar('\n');
	for (r = 1; r <= 9; r++)
	{
		counter = 0;
		for (c = 0; c <= 9; c++)
		{
			times = (r * counter);
			if (times / 10 > 0)
			{
				_putchar((times / 10) + '0');
				_putchar((times % 10) + '0');
			}
			else
			{
				_putchar((times % 10) + '0');
			}
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			counter++;
		}
		_putchar('\n');
	}
}
