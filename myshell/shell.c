#include <stdio.h>

int main()
{
	ssize_t read_char;

	while (1)
	{
		printf("Enter characters: ");
		read_char = read_line(
