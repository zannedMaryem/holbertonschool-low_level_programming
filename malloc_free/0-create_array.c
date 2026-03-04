#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: character to fill the arry with
 *
 * Return: NULL if size = 0, a pointer to the array,
 * or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	tab = malloc(sizeof(*tab) * size);
	if (size == 0 || tab == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		tab[i] = c;
	}
	return (tab);
	free(tab);
}
