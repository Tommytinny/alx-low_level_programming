#include "shell.h"

char prompt(void)
{
	char reader;

	reader = write(STDOUT_FILENO, "(Dshell) $: ", 13);
	return (reader);
}
