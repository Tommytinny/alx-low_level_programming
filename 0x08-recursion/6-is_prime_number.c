#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - prime number
 * @n: input value
 *
 * Return: 1 if n is prime number else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (primenum(n, 2));
}

/**
 * primenum - Checks from 1  to n
 * @a: place holder for n
 * @b: number that iterates from 1 to n
 * Return: On success 1
 */
int primenum(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	return (primenum(a, b + 1));
}
