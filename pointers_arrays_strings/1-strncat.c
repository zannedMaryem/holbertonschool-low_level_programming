#include "main.h"
/**
 *_strncat - function that concatenates two strings
 *@dest: output string
 *@src: input string
 *@n: number of bytes to add
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	/*int len_1 = _strlen(src);*/
	int len = _strlen(dest);

	for (i = 0; i < n; i++)
	{
		dest[len - 1] = ' ';
		dest[i + len] = src[i];
	}
	dest[len + n] = '\0';
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
