#include "main.h"

/**
 * jack_bauer - prints every minute of day
 * Return: void
 */
void jack_bauer(void)
{
	int hrs, mins;

	for (hrs = 0; hrs < 24, hrs++)
	{
		for (mins = 0; mins < 60, mins++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}

}
