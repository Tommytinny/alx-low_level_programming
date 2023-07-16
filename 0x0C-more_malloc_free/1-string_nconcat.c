#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st input string
 * @s2: 2nd input string
 * @n: number of byte
 *
 * Return: NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	char *output;
	unsigned int copy_len;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	/* Determine the actual number of bytes to copy from s2 */
	if (n >= s2_len)
		copy_len = s2_len;
	else
		copy_len = n;

	/* Allocate memory for the result string */
	output = malloc((s1_len + copy_len + 1) * sizeof(char));
	if (output == NULL)
		exit(EXIT_FAILURE);

	/* Copy s1 into the result */
	for (i = 0; i < copy_len; i++)
		output[s1_len + i] = s2[i];

	/* NULL-terminate the result */
	output[s1_len + copy_len] = '\0';

	return (output);
}
