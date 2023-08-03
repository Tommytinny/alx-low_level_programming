#include <stdio.h>
#include "main.h"

/**
 * print_binary - primts the binary representation of a number
 * @n: number
 *
 * Return: always 0
 */
void print_binary(unsigned long int n)
{
	int i, mask, bit = sizeof(int) * 8;
	int start_print = 0;

	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
	{
		for (i = bit - 1; i >= 0; i--)
		{
			mask = 1 << i;
			if ((n & mask) != 0)
				start_print = 1;
			if (start_print)
			{
				if ((n & mask) == 0)
					_putchar('0');
				else
					_putchar('1');
			}
		}
	}
}
