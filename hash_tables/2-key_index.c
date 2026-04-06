#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * key_index - a function that returns an index of a key
 *@key: the key of the hash function.
 *@size: size of hash table.
 *Return: the index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (key == NULL || size == 0)
	{
		return (0);
	}
	idx = (hash_djb2(key) % size);
	return (idx);
}
