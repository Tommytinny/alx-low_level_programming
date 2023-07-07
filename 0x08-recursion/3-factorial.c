#include "main.h"
#include <stdio.h>

/**
 * factorial -  returns the factorial of a given number.
 * @n: given number
 * Return: the factorial of the given number
 * factorial - returns the factorial of a given number
 * @n: Given number
 *
 * Return: if n is less than 0, return -1.
 * if n is equal to 0, return 1.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
