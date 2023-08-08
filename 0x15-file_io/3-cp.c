#include "main.h"

void close_fd(int fd);
/**
 * _strlen - length of a string
 * @s: string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}

/**
 * close_fd - close file descriptor
 * @fd: file descriptor
 */
void close_fd(int fd)
{
	int fd_v;

	fd_v = close(fd);
	if (fd_V == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(int ac, char **argv)
{
	int fd, fld;
	char buffer[1024];
	const char *file_fr = argv[1];
	const char *file_to = argv[2];
	ssize_t byteFd, byteFld;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		free(buffer);
		exit(97);
	}

	fd = open(file_fr, O_RDONLY);
	byteFd = read(fd, buffer, sizeof(buffer));
	if (fd == -1 || byteFd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't read from file %s\n", file_fr);
		free(buffer);
		exit(98);
	}

	fld = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	byteFld = write(fld, text, _strlen(text));
	if (fld == -1 || byteFld == -1)
	{

		exit(99);
	}
	free(buffer);
	close_fd(fd);
	close_fd(fld);
}
