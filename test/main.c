#include "shell.h"

int main(void)
{
	char *line = NULL;
	int process = 1;
	size_t n = 0;
	ssize_t read_line;
	char **args;

	if (isatty(STDIN_FILENO) != 1)
	{
		no_interact();
	}
	else
	{
		while (process == 1)
		{
			prompt();
			if ((read_line = getline(&line, &n, stdin) == -1))
			{
				free(line);
				perror("error: ");
				exit(EXIT_FAILURE);
			}
			else
			{
				if(feof(stdin))
				{
					free(line);
					exit(EXIT_FAILURE);
				}
			}
			
			args = tokenize_line(line, read_line);
			process = process_cmd(args);
		}
		free(line);
		free(args);
	}
	return (0);
}

