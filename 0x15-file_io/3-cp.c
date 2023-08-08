#include "main.h"

void close_fd(int fd);

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
 * error - check for error
 * @fd_frm: file_from
 * @fd_to: file_to
 * @argv: arguments
 * Return: no return
 */
void error(int fd_frm, int fd_to, char **argv)
{
	if (fd_frm == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - copies the content of a file to another file
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fd_frm, fd_to;
	char buffer[1024];
	ssize_t byteRd, byteWr;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_frm = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT | O_APPEND, 0664);
	error(fd_frm, fd_to, argv);

	byteRd = 1024;
	while (byteRd == 1024)
	{
		byteRd = read(fd_frm, buffer, 1024);
		if (byteRd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant't read from file %s\n", argv[1]);
			exit(98);
		}
		byteWr = write(fd_to, buffer, byteRd);
		if (byteWr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

	}

	close_fd(fd_frm);
	close_fd(fd_to);

	return (0);
}
