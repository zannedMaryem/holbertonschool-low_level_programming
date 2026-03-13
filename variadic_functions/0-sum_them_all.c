#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - get the sum of all variables.
 * @n: first variable.
 *
 * Return: sum of variables.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int total = 0;
	unsigned int i;

	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		total += va_arg(ap, int);
	}
	va_end(ap);
	return (total);
}
