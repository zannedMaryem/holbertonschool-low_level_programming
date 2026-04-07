#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_get - function that retrieves a value associated with a key.
 *@ht: hash table.
 *@key: key of the hash function.
 *Return: the value associated with the element,
 *or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *result;
	unsigned long int index;
	hash_node_t *ptr;

	if (key == NULL || ht == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			result = ptr->value;
			return (result);
		}
		ptr = ptr->next;
	}
	return (NULL);
}
