#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: Always 0
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return ((int)*byte);
}
