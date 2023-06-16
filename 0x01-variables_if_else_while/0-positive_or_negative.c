#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program that assign a random number each time executed
 * Return: 0 if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf(n, "The number is positive\n");
	}
	else if (n == 0)
	{
		printf(n, "The number is zero\n");
	}
	else
	{
		printf(n, "The number is negative\n");
	}
	return (0);
}

