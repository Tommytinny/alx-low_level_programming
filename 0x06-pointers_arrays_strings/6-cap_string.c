#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * *cap_string - capitalizes all words of a string
 * @str: string
 * Return: 0
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (capitalize_next && islower(*ptr))
		{
			*ptr = toupper(*ptr);
			capitalize_next = 0;
		}
		else if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
				*ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
				*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' ||
				*ptr == '}')
		{
			capitalize_next = 1;
		}
		else if (isupper(*ptr))
		{
			capitalize_next = 0;
		}

		ptr++;
	}
	return (str);
}
