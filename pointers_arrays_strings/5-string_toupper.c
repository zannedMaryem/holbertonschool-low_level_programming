#include "main.h"
/**
 * string_toupper - changes all lower case characters
 * into upper case characters
 * @s: input string
 *
 * Return: string with full upper case characters
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
