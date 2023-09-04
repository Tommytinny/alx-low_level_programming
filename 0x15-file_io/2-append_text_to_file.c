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
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file.
 * @text_content: string to append.
 *
 * Return: 1 if the file exixts,
 * -1 if file doesn't exist or no permission.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDes;
	ssize_t byteW;

	if (filename == NULL)
		return (-1);

	fileDes = open(filename, O_WRONLY | O_APPEND);
	if (fileDes == -1)
		return (-1);

	if (text_content != NULL)
	{
		byteW = write(fileDes, text_content, _strlen(text_content));
		if (byteW == -1)
			return (-1);
	}

	close(fileDes);
	return (1);
}
