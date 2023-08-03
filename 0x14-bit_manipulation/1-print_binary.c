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

	if (n == 0)
		putchar('0');
	else if (n == 1)
		putchar('1');
	else
	{
		for (i = bit - 1; i >= 0; i--)
		{
			mask = 1 << i;

			while ((n & mask) == 1)
			{
				if ((n & mask) == 0)
					putchar('0');
				else
					putchar('1');
				i++;
			}
		}
	}
}
