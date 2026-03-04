#include "main.h"
#include <stdlib.h>
/**
 *str_concat - function that concatenates two strings.
 *@s1: string to concatinate
 *@s2: string to concatinate
 *
 *Return: NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len_s1 = 0, len_s2 = 0;
	char *str_concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}
	str_concat = malloc(len_s1 + len_s2 + 1);
	if (str_concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
		str_concat[i] = s1[i];
	}
	for (j = 0; j < len_s2; j++)
	{
		str_concat[j + i] = s2[j];
	}
	str_concat[i + j] = '\0';
	return (str_concat);
}