#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table ht
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	register unsigned int i = 0;
	hash_node_t *current, *temp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			current = ht->array[i];
			while (current)
			{
				temp = current;
				free(current->key);
				if (current->value)
					free(current->value);
				current = current->next;
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
