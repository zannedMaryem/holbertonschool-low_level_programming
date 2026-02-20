#include "main.h"
/**
 * _atoi - a function that converts a string into an integer
 * @s: input string
 *
 * Return: return 0 if the string has no integers
 */
int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
	}
	return (result * sign);
}
