#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: value
 * Return: -1 if n doeen't have a square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (cal_sqrt(n, root);
}

/**
 * cal_sqrt - calculate the square root
 * @n: given value
 * @root: root value
 * Return: the square root
 */
int cal_sqrt(int n, int root)
{
	if ((root * root) == n)
	{
		return (root);
	}
	if (root == n / 2)
	{
		return (-1);
	}
	return (cal_sqrt(n, root + 1));
}
