#include <stdio.h>

/**
 * main - Prints the size of various types
 * Return: 0 if success
 */
int main(void)
{
printf("Size of char: %zu bytes\n", sizeof(char));
printf("Size of an int: %zu bytes\n", sizeof(int));
printf("Size of long int: %zu bytes\n", sizeof(long int));
printf("Size of long long int: %zu bytes\n", sizeof(long long int));
printf("Size of float: %zu bytes\n", sizeof(float));
return (0);
}
