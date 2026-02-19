#include "main.h"
/**
 * _strlen - Function that returns the length of a string.
 * @s: string variable
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; i < *s; i++)
	{
		s++;
	}
	return (i);
}
