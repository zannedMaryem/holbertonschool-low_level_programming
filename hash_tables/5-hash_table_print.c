#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_print -
 * @gt: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			printf("'%s' : '%s'", ptr->key, ptr->value);
			if (ptr->next != NULL)
			{
				printf(", ");
			}
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
