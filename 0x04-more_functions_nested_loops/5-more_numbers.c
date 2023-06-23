#include "main.h"
/**
 * more_numbers - Function
 *
 * Description: print 10x numbers from 0 - 14
 */
void more_numbers(void)
{
	int x, i;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i / 10 > 0)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
