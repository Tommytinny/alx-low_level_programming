#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - add two numbers together
 * @a: first number
 * @b: second number
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - subtract one number from another
 * @a: number to be subtracted
 * @b: number to be subtracted from
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}

/**
 * op_mul - multipy two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	int product;

	product = a * b;
	return (product);
}

/**
 * op_div - division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: result
 */
int op_div(int a, int b)
{
	int result;

	result = a / b;
	return (result);
}

/**
 * op_mod - remainder of the division of
 * two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	int remainder;

	remainder = a % b;
	return (remainder);
}
