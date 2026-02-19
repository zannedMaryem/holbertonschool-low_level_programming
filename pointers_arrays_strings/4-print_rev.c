#include "main.h"
/**
 *print_rev - a function that prints a string, in reverse,
 *followed by a new line.
 * @s: string variable
 * Return: void
 */
void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
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
