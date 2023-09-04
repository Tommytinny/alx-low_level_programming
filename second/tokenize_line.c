#include "Dshell.h"

/**
 * tokenize_line - split line of arguments
 * @input: arguments to be split
 * @read_line: length of the arguments
 *
 * Return: split arguments in tokens
 */

char **tokenize_line(char *input, ssize_t read_line)
{
	char *token;
	char **tokens;
	char *delim = " \t\r\n\a\"";
	int i, num_tokens;

	tokens = malloc(sizeof(char *) * read_line / 2);

	if (!tokens)
	{
		fprintf(stderr, "allocation error: tokens\n");
		exit(EXIT_FAILURE);
	}

	i = 0;
	num_tokens = read_line / 2;

	input[read_line - 1] = '\0';
	token = strtok(input, delim);
		
	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, delim);
		i++;

		if (i >= num_tokens)
		{
			num_tokens *= 2;
			tokens = realloc(tokens, sizeof(char *) * num_tokens);

			if (!tokens)
			{
				fprintf(stderr, "reallocation error: tokens\n");
				exit(EXIT_FAILURE);
			}
		}
	}
	tokens[i] = NULL;

	return (tokens);
}
