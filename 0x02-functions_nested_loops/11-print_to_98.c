#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: character passsed
 * Return: void
 */
void print_to_98(int n)
{
	int counter;

	if (n <= 98)
	{
		for (counter = n; counter <= 98; counter++)
		{
			if  (counter / 10 > 0)
			{
				_putchar((counter / 10) + '0');
				_putchar((counter % 10) + '0');
			}
			else
			{
				_putchar((counter % 10) + '0');
			}
			if (counter != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (counter = n; counter >= 98; counter--)
		{
			if (counter / 10 > 0)
			{
				_putchar((counter / 10) + '0');
				_putchar((counter % 10) + '0');
			}
			else
			{
				_putchar((counter % 10) + '0');
			}
			if (counter != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
