#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copies a string
 * @dest: copy to
 * @src: copy from
 * @n: maximum bytes
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
		i++;
	}

	for (; x < n; x++)
	{
		dest[x] = '\0';
	}


	return (dest);
}
