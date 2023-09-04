#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024


int main()
{
	int bufsize = BUFFER_SIZE;
	char *buffer = malloc(sizeof(char) * bufsize);
	int point = 0;
	ssize_t c_read;

	if (!bufsize)
	{
		fprintf(stderr, "line: allocation error\n");
		exit(EXIT_FAILURE);
	}
	printf("Enter a line of text: ");
	fflush(stdout);

	while (1)
	{
		c_read = read(STDIN_FILENO, buffer, bufsize);

		if (c_read == -1)
		{
			perror("read");
			exit(EXIT_FAILURE);
		}
		else if (c_read == 0)
		{
			break;
		}
		point += c_read;

		if (buffer[point - 1] == '\n')
			break;
	}

	buffer[point] = '\0';

	printf("you entered: %s", buffer);

	return (0);
}
