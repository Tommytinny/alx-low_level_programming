#include "main.h"

/**
 * _islower - check if c is lowercase
 * Description: c represent the alphabet
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
