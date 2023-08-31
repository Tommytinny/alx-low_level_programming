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
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int start_print = 0;

	if (n == 0)
		putchar('0');

	while (mask > 0)
	{
		if ((n & mask) != 0)
			start_print = 1;

		if (start_print)
		{
			if ((n & mask) == 0)
				putchar('0');
			else
				putchar('1');
		}

		mask >>= 1;
	}
}
