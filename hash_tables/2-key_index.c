#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * key_index -
 *
 *
 *
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