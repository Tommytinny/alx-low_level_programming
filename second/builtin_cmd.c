#include "Dshell.h"
/**
  *get_cmd_func - Entry to the function
  *@s: a pointer to the string
  *Return: Always 0 (success)
  */

int (*get_cmd_func(char *s))(char **)
{
	builtinCmd built[] = {
		{"exit", exit_cmd},
		{"env", env_cmd},
		{NULL, NULL}
	};
	int i = 0;

	while (built[i].cmd != NULL && strcmp_cmd(built[i].cmd, s) != 0)
		i++;

	return (built[i].f);
}

/**
 * exit_cmd - exits the shell
 * @args: parameter argument
 * Return: 0 to exit
 */

int exit_cmd(char **args)
{
	int status;

	if (args[1] != NULL)
	{
		status = atoi(args[1]);
		exit(status);
	}
	else
	{
		exit(0);
	}
}

/**
 * env_cmd - prints the current environment
 * @args: parameter argument
 *
 * Return: always 0
 */
int env_cmd(char **args)
{
	int i;

	(void)**args;

	for (i = 0; environ[i] != NULL; i++)
	{
		printf("%s\n", environ[i]);
	}
	return (0);
}
