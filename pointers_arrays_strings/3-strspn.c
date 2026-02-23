#include "main.h"
/**
 *_strspn - function that gets the length of a prefix substring
 *@s: input string to compare
 *@accept: string to capare to
 *
 *Return: number of corresspndings
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, found;
	unsigned int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				found = 1;
			break;
		}
		if (found)
			k++;
		else
			break;
	}
	return (k);
}
