#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: NULL if str = NULL, NULL if insufficient memory was available.
 *
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *str_dupe;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	str_dupe = malloc(len + 1);
	if (str_dupe == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		str_dupe[i] = str[i];
	}
	str_dupe[len] = '\0';
	return (str_dupe);	
}
