#include "main.h"
/**
 * _sqrt_recursion - function that cheks .
 * @n: input data
 *
 * Return: square root of n.
 */
int _sqrt_recursion(int n)
{
	static int i;

	if (n < 0)
	{
		i = 0;
		return (-1);
	}
	if (i * i == n)
	{
		int result = i;

		i = 0;
		return (result);
	}
	if (i * i > n)
	{
		i = 0;
		return (-1);
	}
	i++;
	return (_sqrt_recursion(n));
}
