#include "hash_tables.h"

/**
 * key_index - returns the index of the key
 * @key: given key
 * @size: size of the hash table
 * Return: Index at which key must be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int gen;

	gen = hash_djb2(key);
	return (gen % size);
}
