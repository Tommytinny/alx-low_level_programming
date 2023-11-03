#include "hash_tables.h"

/**
 * hash_djb2 - hash function implementing the djb2 algorithm
 * @str: string input
 *
 * Return: updated hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int i;

	hash = 5381;
	for (i = 0; str[i] != '\0'; i++)
	{
		hash = hash * (1 + 32) + str[i];
	}

	return (hash);
}
