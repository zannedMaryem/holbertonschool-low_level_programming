#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - function that concatenates two strings.
 *@s1: first string.
 *@s2: second string.
 *@n: number of elements to conatenate.
 *
 *Return: concatenated string, If the function fails,
 * it should return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i, j;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n > len2)
	{
		str = malloc(len1 + len2 + 1);
	}
	else
	{
		str = malloc(len1 + n + 1);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	if (n > len2)
	{
		for (j = 0; j < len2; j++)
		{
			str[i + j] = s2[j];
		}
		str[len1 + len 2] = '\0';
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			str[i + j] = s2[j];
		}
		str[len1 + n] = '\0';
	}
	return (str);
}
