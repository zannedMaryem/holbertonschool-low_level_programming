#include "main.h"
/**
 *cap_string - function that capitalizes all words of a string.
 *@s: input string
 *
 * Return: returns string with all words capitalized
 */
char *cap_string(char *s)
{
	int i = 0;
	int cap = 1;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == "." ||
			s[i] == ',' || s[i] == ';' ||
			s[i] == '!' || s[i] == '?' ||
			s[i] == '"' || s[i] == '(' ||
			s[i] == ')' || s[i] == '{' ||
			s[i] == '}' || s[i] == '\n' ||
			s[i] == '\t')
		{
			cap = 1;
		}
		else if (cap && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
			cap = 0;
		}
		else
		{
			cap = 0;
		}
		i++;
	}
	return (s);
}
