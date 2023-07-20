#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - the sum of all parameters passed
 * @n: first parameter
 *
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int numb, sum;
	va_list args;

	va_start(args, n);
	sum = 0;
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		numb = va_arg(args, int);
		sum += numb;
	}
	va_end(args);
	return (sum);
}
