#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to string 0 and 1
 *
 * Return: converted number
 * 0, if one or more chars in  the string b
 * that is not 0 or 1
 * 0, if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		result = (result * 2) + (b[i] - '0');
	}

	return (result);
}
