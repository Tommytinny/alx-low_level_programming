#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: is the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, printed = 0;
	hash_node_t *items;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			items = ht->array[i];
			while (items != NULL)
			{
				if (printed != 0)
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
}
