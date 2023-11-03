#include "hash_tables.h"
/**
 * hash_table_create - function that creates hash table
 *
 * @size: size of the array
 *
 * Return: address of the new hash table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	if (!size)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t));

	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
