#include "main.h"
/**
 * s_check - cheks if s is NULL and replaces it with empty char.
 * @s: input string
 *
 * Return : empty string if s is NULL
 */
char *s_check(char *s)
{
	if (s == NULL)
	{
		s = "";
	}
	return (s);
}