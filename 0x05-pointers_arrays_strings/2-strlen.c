#include "main.h"
#include <stdio.h>

/**
 * _strlen -  Function
 * @s: char input
 * Return: Length of the input
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
