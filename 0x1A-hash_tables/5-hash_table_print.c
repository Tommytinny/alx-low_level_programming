#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: is the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *items;
	int printed;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		items = ht->array[i];
		while (items != NULL)
		{
			if (printed)
			{
				printf(", ");
			}
			printf("'%s': '%s'", items->key, items->value);
			printed = 1;
			items = items->next;
		}
	}
	printf("}\n");
}
