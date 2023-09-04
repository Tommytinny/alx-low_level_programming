#include "shell.h"

int process_cmd(char **args)
{
	int i = 1;
	int (*f)(char **);

	if (args[0] == NULL)
	{
		return (i);
	}

	f = get_cmd_func(args[0]);

	if (f == NULL)
	{
		return (execute_cmd(args));
	}

	return (f(args));
}
