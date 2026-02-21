#include "main.h"
/**
 * _strncpy - Function that copies a string
 * @src: source string
 * @dest: destination string
 * @n: nuber of characters to copy
 *
 * Return: return the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len = _strlen(src);

	for (i = 0; i < len && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
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
