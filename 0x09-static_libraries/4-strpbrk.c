#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string
 * @accept: set bytes to be searched
 *
 * Return: pointer to the matched byte
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				return (s);
			}
		}

		s++;
	}

	return ('\0');
}
