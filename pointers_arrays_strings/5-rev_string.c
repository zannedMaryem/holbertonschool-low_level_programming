#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: string parameter
 */
void rev_string(char *s)
{
	int i = 0;
	int j = _strlen(s) - 1;
	char temp;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
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
