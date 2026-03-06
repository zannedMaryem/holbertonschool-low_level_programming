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
	int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * sizeof(size));
	if (array == NULL)
	{
		return (NULL);
	}
	while (array[i] != '\0')
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
