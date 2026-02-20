#include "main.h"
/**
 * puts_half - function that prints half of a string,
 * followed by a new line
 * @str: input string
 */
void puts_half(char *str)
{

	int len = _strlen(str);
	int odd = (len + 1) / 2;
	int even = len / 2;
	int first;
	int i;

	if (len % 2 == 0)
		first = even;
	else
		first = odd;
	for (i = first; i < len; i++)
	{
		_putchar(str[i]);
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
