#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, p, x;

	/* treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* calculate length of s1 & s2 */
	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	/* allocate memory for concatenated string */
	concat = malloc(sizeof(char) * (i + j + 1));
	if (concat == NULL)
		return (NULL);

	/* copy character from each string to concatenated */
	for (p = 0; p < i; p++)
		concat[p] = s1[p];

	for (x = 0; x < j; x++)
		concat[p + x] = s2[x];

	/* Add null terminator at the end */
	concat[p + x] = '\0';

	return (concat);
}
