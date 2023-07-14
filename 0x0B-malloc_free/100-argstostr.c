#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_total_length - calculates the total length
 * @ac: argument count
 * @av: array of strings for program
 *
 * Return: total length
 */
int get_total_length(int ac, char **av)
{
	int length = 0;
	int i, j;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			length++;
			j++;
		}
	}

	length += ac;

	return (length);
}

/**
 * argstostr - concatenates all the arguments
 * to your program
 *
 * @ac: argument count
 * @av: array of strings for program
 *
 * Return: pointer to new string
 * or NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int length, i, j = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = get_total_length(ac, av);

	concat = malloc(sizeof(char) * (length + 1));
	if (concat == NULL)
		return (NULL);

	int index = 0;

	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			concat[index] = av[i][j];
			index++;
			j++;
		}
		concat[index] = '\n';
		index++;
	}

	concat[index] = '\0';

	return (concat);
}
