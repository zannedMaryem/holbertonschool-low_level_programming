#include "main.h"
/**
 * print_alphabet - prints the lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
