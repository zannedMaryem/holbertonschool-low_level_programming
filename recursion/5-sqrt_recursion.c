#include "main.h"
/**
 * _sqrt_recursion_internal - function that
 * cheks if i is the square root of n.
 * @n: input data
 * @i: cheker for square root
 *
 * Return: the square root i.
 */
int _sqrt_recursion_internal(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_recursion_internal(n, i + 1));
}
/**
 * _sqrt_recursion - function that returns the
 * natural square root of a number .
 * @n: input data
 *
 * Return: square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_internal(n, 0));
}
