#include "main.h"

/**
 * _strlen - length of string.
 * @s: string input.
 *
 * Return: length of the string.
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
 * create_file - creates a file.
 * @filename: name of file to be created.
 * @text_content: text to written in the file.
 *
 * Return: 1 on success, -1 on failure.
 * -1 if filename is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int fileDes;
	ssize_t byteW;

	if (filename == NULL)
		return (-1);

	fileDes = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fileDes == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		byteW = write(fileDes, text_content, _strlen(text_content));
		if (byteW == -1)
			return (-1);
	}

	close(fileDes);

	return (1);
}
