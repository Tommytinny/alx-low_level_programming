#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at
 * a given index.
 * @n: number from which to extract the bit.
 * @index: position of the bit to extract.
 *
 * Return: value of the bit at index
 * or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int shift_num, bit;

	if (index >= sizeof(int) * 8)
		return (-1);

	shift_num = n >> index;
	bit = shift_num & 1;

	return (bit);
}
