#include "shell.h"

int execute_cmd(char **args)
{
	pid_t my_pid;
	int status;

	my_pid = fork();
	if (my_pid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror("./shell");
		}
		exit(EXIT_FAILURE);
	}
	else if (my_pid > 0)
	{
		while (!WIFEXITED(status) && !WIFSIGNALED(status))
		{
			waitpid(my_pid, &status, WUNTRACED);
		}

	}
	else
	{
		perror("error: forking");
	}

	return (1);
}
