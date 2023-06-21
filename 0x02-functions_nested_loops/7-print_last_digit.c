#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: character
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar("%d%d\n", last_digit, last_digit);
	return (last_digit);
}
