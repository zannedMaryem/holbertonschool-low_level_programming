#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings.
 * @n: is the number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);
		if (string == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", string);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}