#include "main.h"
/**
 * _strlen - Function that returns the length of a string.
 * @s: string variable
 * Return: retuns the length oof string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '/0')
	{
		s++;
		i++;
	}
	return (i);
}
