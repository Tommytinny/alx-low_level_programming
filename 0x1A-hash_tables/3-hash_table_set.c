#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new = malloc(sizeof(hash_node_t));
	
	if (new == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char*)key, ht->size);
	new->key = malloc(strlen(key) + 1);
	new->value = malloc(strlen(key) + 1);
	strcpy(new->key, key);
	strcpy(new->value, value);
	new->next = NULL;

	if (ht->array[index] != NULL)
		new->next = ht->array[index];

	ht->array[index] = new;

	return (1);
}
