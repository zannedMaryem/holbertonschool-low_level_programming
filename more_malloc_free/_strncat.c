#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 *@s1: first string.
 *@s2: second string.
 *@n: number of elements to conatenate.
 *
 *Return: concatenated string, If the function fails,
 * it should return NULL.
 */
char *_strncat(char *s1, char *s2, unsigned int n)
{
	char *str_out;
	unsigned int i, j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	for (i = 0; i < len1; i++)
	{
		str_out[i] = s1[i];
	}
	if (n > len2)
	{
		for (j = 0; j < len2; j++)
		{
			str_out[i + j] = s2[j];
		}
		str_out[len1 + len2] = '\0';
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			str_out[i + j] = s2[j];
		}
		str_out[len1 + n] = '\0';
	}
	return (str_out);
}
