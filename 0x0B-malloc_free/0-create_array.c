#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of chars
 * and initializes it with specific char
 *
 * @size: size of array
 * @c: char to be initialized
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
