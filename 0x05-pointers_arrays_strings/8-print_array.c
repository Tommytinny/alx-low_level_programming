#include "main.h"

/**
 * puts_half -  Function
 * @str: input
 * Return: half of input
 */
void puts_half(cahr *str)
{
	int i, n, len;

	len = 0;

	for (i = 0; str[i] != '\0'; 1++)
	{
		len++;
	}
	n = (len / 2);
	if ((len % 2) == 1)
	{
		n = ((len + 1) /  2)
	}
	for (i = n; str[1] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
