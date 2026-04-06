#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the hash table
 *
 * Return: A pointer to the newly created hash table, or NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;

	if (size == 0)
	{
		return (NULL);
	}
	tab = malloc(sizeof(hash_table_t) * size);
	if (tab == NULL)
	{
		return (NULL);
	}
	tab->size = size;
	return (tab);
}
