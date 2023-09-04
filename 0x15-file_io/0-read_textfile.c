#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 * @filename: the name of the file.
 * @letters: number of letters it should read and print.
 *
 * Return: 0 if file can not be opened or red,
 * filename is NULL,
 * write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int filesDes;
	ssize_t byteRead;
	ssize_t output;

	filesDes = open(filename, O_RDONLY);
	if (filesDes == -1 || filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	byteRead = read(filesDes, buffer, letters);
	output = write(STDOUT_FILENO, buffer, byteRead);
	if (output == -1)
	{
		free(buffer);
		return (0);
	}

	close(filesDes);
	free(buffer);

	return (output);
}
