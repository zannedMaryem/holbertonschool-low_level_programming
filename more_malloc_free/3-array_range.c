#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: value of first element.
 * @max: value of las element.
 *
 * Return: array, or NULL if min > max or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	size = max - min + 1;
	if (min > max)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
