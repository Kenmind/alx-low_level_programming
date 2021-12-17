#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table
 * @ht: hash table
 * @key: input key
 * @value: string related to the key
 * Return: 1 else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current, *new;
	unsigned long int index;

	if (!ht || !value || !key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
		return (0);
	new->value = strdup(value);
	if (!new->value)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
