#ifndef _SHELL_H
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

typedef struct cmd
{
	char *cmd;
	int (*f)(char **args);
} builtinCmd;

extern char **environ;
int (*get_cmd_func(char *s))(char **);
char **tokenize_line(char *line, ssize_t n);
char prompt(void);
int process_cmd(char **args);
int execute_cmd(char **args);
int exit_cmd(char **args);
int env_cmd(char **args);
void no_interact(void);

#endif /* _SHELL_H_ */
