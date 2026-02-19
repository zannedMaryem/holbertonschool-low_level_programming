#include "main.h"
/**
 * _strlen - Function that returns the length of a string.
 * @s: string variable
 * Return: retuns the length oof string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '/0'; i++)
	{
		s++;
	}
	return (i);
}
