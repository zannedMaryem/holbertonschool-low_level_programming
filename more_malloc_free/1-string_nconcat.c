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

	s1 = s_check(s1);
	s2 = s_check(s2);
	str = _strncat(s1, s2, n);
	return (str);
}
/**
 * s_check - cheks if s is NULL and replaces it with empty string.
 * @s: input string
 * Return: returns empty string if s is NULL
 */
char *s_check(char *s)
{
	if (s == NULL)
	{
		s = "";
	}
	return (s);
}
/**
 * _strlen - Function that returns the length of a string.
 * @s: string variable
 * Return: retuns the length oof string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: size of memory to allocate
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
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
	if (n > len2)
	{
		str_out = malloc_checked(len1 + len2 + 1);
	}
	else
	{
		str_out = malloc_checked(len1 + n + 1);
	}
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
