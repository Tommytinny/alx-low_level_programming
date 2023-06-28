#include "main.h"

/**
 * print_rev - Funtion
 * fcounter is to first count to end, n is to count back
 * @s: str input
 * Return: string in reserve
 */
void print_rev(char *s)
{
	int fcounter = 0;
	itn i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fcounter++;
	}
	for (n = (fcounter - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}