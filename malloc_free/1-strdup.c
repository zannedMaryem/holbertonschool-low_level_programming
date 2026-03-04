#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: NULL if str = NULL, NULL if insufficient memory was available.
 *
 */
char *_strdup(char *str)
{
	char *str_dupe = malloc(sizeof(*str));
	int i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (str == NULL || sizeof(str) == 0)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		str_dupe[i] = str[i];
	}
	return (str_dupe);
	free(str_dupe);
}
