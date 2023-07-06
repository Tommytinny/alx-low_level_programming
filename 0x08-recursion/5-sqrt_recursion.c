#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: value
 * Return: -1 if n doeen't have a square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (cal_sqrt(n, 1, n));
	}
}

/**
 * cal_sqrt - calculate the square root
 * @n: given value
 * @s: start value
 * @e: end value
 * Return: the square root
 */
int cal_sqrt(int n, s, e)
{
	if (s > e)
	{
		return (-1);
	}

	int mid = (s + e);

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (cal_sqrt(n, s, mid - 1));
	}
	else
	{
		return (cal_sqrt(n, mid + 1, e));
	}
}
