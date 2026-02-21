#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: variable to concatinate into
 * @src: variabl to concatinate
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	int len_1 = _strlen(src);
	int len_2 = _strlen(dest);

	for (i = 0; i < len_1; i++)
	{
		dest[len_2 - 1] = ' ';
		dest[i + len_2] = src[i];
	}
	dest[len_1 + len_2] = '\0';
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
