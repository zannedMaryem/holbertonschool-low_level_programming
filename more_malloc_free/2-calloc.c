#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: elements of the array.
 * @size: type of the elements.
 *
 * Return: returns NULL if nmemb or size is 0,
 * or If malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *array;
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		array[i] = 0;
	}
	return (array);
}
