#include "shell.h"

int (*get_cmd_func(char *s))(char **)
{
	builtinCmd built[] = {
		{"exit", exit_cmd},
		{"env", env_cmd},
		{NULL, NULL}
	};
	int i = 0;

	while (built[i].cmd != NULL && strcmp(built[i].cmd, s) != 0)
		i++;
	return (built[i].f);
}


int exit_cmd(char **args)
{
	(void)**args;
	exit(0);
}

int env_cmd(char **args)
{
	int i;

	(void)**args;

	for (i = 0; environ[i] != NULL; i++)
		printf("%s\n", environ[i]);

	return (0);
}
