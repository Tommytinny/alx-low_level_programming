#include "main.h"

/**
 * print_triangle - Function
 *
 * @size: character
 * Description: print a triangle
 * Return: void
 */
int print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (int row = 1; row <= size; row++)
	{
		for (int space = 1; space <= size - row; space++)
		{
			_putchar(' ');
		}

		for (int star = 1; star <= row; star++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
