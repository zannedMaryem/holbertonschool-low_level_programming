#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Description: This program prints "_putchar" followed by a new line
 *				to the standard output.
 *@c: The character to be printed
 */
int _putchar(char c);

int main(void)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
