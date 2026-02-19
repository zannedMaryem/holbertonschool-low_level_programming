#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse,
 *followed by a new line.
 * @s: string to reverse
 */
void print_rev(char *s);

void print_rev(char *s)
{
	int i = _strlen(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
