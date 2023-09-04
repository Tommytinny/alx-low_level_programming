#include "Dshell.h"

#define BUFFER 1024
/**
 * main - entry point
 *
 * Return: 0 always on success
 */
int main(void)
{
	char *line = NULL;
	ssize_t read_line;
	size_t line_size = 0;
	char **args;

	if (isatty(STDIN_FILENO) == 1)
	{
		interact_mode();
	}
	else
	{
		while ((read_line = getline(&line, &line_size, stdin)) != -1)
		{
			args = tokenize_line(line, read_line);

			if (read_line == 1)
			{
				perror("Error: ");
				return (1);
			}
			process_cmd(args);

			free(args);
		}
		free(line);
	}
	return (0);
}
