#include "main.h"
/**
 *_strlen_recursion - function that returns the length of a string
 *@s: input string
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s == '\0')
	{
		return (0);
	}
	len += _strlen_recursion(s + 1);
	return (len);
}
