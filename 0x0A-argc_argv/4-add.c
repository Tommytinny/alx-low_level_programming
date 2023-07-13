#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that check for a digit 0 - 9
 * @n: character to check
 *
 * Return: 1 if is digit 0 if not
 */
int _isdigit(int n)
{
	if ((n >= 48) && (n <= 57))
	{
		return (1);
	}
	return (0);
}

/**
 * _atoi - convert string to integer
 * @s: string
 * Return: integer of string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == ' ')
	{
		s++;
	}
	if (*s == '-' || *s == '+')
	{
		sign = (*s == '-') ? -1 : 1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = (result * 10) + (*s - '0');
		s++;
	}

	return (result * sign);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if not digit else 0
 */
int main(int argc, char *argv[])
{
	int i, j, nums, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!_isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		nums = _atoi(arg);
		sum += nums;
	}
	printf("%d\n", sum);
	return (0);
}
