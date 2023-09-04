#include "Dshell.h"

/**
 * interact_mode - Entry point itno the shell
 *
 * Return: always 0 (success)
  */

int interact_mode(void)
{
	char *input = NULL;
	size_t n = 0;
	ssize_t read_line;
	int process = 1;
	char **args;


	while (process == 1)
	{
		printf("(Dshell) $: ");
		read_line = getline(&input, &n, stdin);

		if (read_line == -1)
		{
			printf("\nError reading input.\n");
			free(input);
			exit(1);
		}
		else
		{
			if (feof(stdin))
			{
				free(input);
				exit(1);
			}
		}
		args = tokenize_line(input, read_line);
		process_cmd(args);
	}

	free(input);
	free(args);
	return (0);
}
