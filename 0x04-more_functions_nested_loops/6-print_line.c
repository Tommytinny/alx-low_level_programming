#include "main.h"
/**
 * print_line - print number of lines inputed
 * @n: Numbers of line to be print
 */
void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
