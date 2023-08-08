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
	int fd_frm, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t byteRd, byteWr;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_frm = open(argv[1], O_RDONLY);
	byteRd = read(fd_frm, buffer, BUFFER_SIZE);
	if (fd_frm == -1 || byteRd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (fd_to > 0)
	{
		byteWr = write(fd_to, buffer, byteRd);
		if (byteWr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		byteRd = read(fd_frm, buffer, BUFFER_SIZE);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	}

	close_fd(fd_frm);
	close_fd(fd_to);

	return (0);
}
