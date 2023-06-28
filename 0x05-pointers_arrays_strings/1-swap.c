#include "main.h"
#include <stdio.h>

/**
 * swap_int - check code
 * @a: 1st value
 * @b: 2nd value
 * Return: swapped values
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
