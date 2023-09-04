#include "shell.h"

char **tokenize_line(char *line, ssize_t n)
{
	char *token;
	char **tokens;
	char *delim = " \n";
	int i;

	tokens = malloc(sizeof(char *) * n);

	if (!tokens)
	{
		fprintf(stderr, "allocation error: tokens\n");
		exit(EXIT_FAILURE);
	}

	i = 0;

	line[n - 1] = '\0';
	token = strtok(line, delim);

	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	tokens[i] = NULL;

	return (tokens);
}
