#include "lists.h"
/**
 * _strlen - calculates the length of a string
 * @s: input string
 * Return: string length.
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
