#include "main.h"

/**
 * _isdigit - function that check for a digit 0 - 9
 * @n: character to check
 *
 * Return: 1 if is digit 0 if not
 */
int _isdigit(int n)
{
	if ((n >= 48) && (n <= 57))
	{
		return (1);
	}
	return (0);
}
