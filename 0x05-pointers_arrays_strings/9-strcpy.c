#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function
 * @dest: copy to
 * #src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	for (  ; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}