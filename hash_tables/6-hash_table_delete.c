#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *tmp;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			tmp = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
