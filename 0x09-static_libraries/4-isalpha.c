#include "main.h"

/**
 * _isalpha - check if character is uppercase or lowercase
 * @c: character to check
 *
 * Return: 1 if meet requirement otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
