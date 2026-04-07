#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int i;
	int first = 1;

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
			if (!first)
			{
				printf(", ");
			}
			printf("'%s' : '%s'", ptr->key, ptr->value);
			first = 0;
			ptr = ptr->next;
			
		}
	}
	printf("}\n");
}
