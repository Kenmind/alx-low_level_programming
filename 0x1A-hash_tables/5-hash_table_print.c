#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	register unsigned int i = 0;
	hash_node_t *current = NULL;
	unsigned char head = true;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			current = ht->array[i];
			while (current)
			{
				if (!head)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				head = false;
				current = current->next;
			}
		}
	}
	printf("}\n");
}
