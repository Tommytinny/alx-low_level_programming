#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: bytes from src
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}
