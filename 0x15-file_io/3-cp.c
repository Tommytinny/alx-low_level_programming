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
	if (fd_v == -1)
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
	char *buffer;
	const char *file_fr = argv[1];
	const char *file_to = argv[2];
	ssize_t byteFd, byteFld;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(file_fr, O_RDONLY);
	buffer = malloc(sizeof(char) * 1024);
	byteFd = read(fd, buffer, sizeof(buffer));
	if (fd == -1 || byteFd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't read from file %s\n", file_fr);
		exit(98);
	}

	fld = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	byteFld = write(fld, buffer, byteFd);
	if (fld == -1 || byteFld == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		free(buffer);
		exit(99);
	}
	fld = open(file_to, O_WRONLY | O_APPEND);

	free(buffer);
	close_fd(fd);
	close_fd(fld);

	return (0);
}
