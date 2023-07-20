#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, int);
		printf("%d", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
