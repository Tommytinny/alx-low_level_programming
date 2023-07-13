#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert string to integer
 * @s: string
 *
 * Return: integer
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
 * main - multipies of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if not two arguments otherwise 0
 */
int main(int argc, char *argv[])
{
	int sum, num1, num2;

	if (argc == 3)
	{
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		sum = num1 * num2;
		printf("%d\n", sum);
		return (0);
	}
	printf("Error\n");
	return (1);
}
