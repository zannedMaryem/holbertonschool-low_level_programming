#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to the function.
 */
void print_all(const char *const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s;
	char c;
	int n;
	double f;
	char *sep = "";

	va_start(ap, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			c = (char)va_arg(ap, int);
			printf("%s%c", sep, c);
			break;
		case 'i':
			n = va_arg(ap, int);
			printf("%s%d", sep, n);
			break;
		case 'f':
			f = va_arg(ap, double);
			printf("%s%f", sep, f);
			break;
		case 's':
			s = va_arg(ap, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", sep, s);
			break;
		}
		sep = ", ";
		i++;
	}

	va_end(ap);
	printf("\n");
}
