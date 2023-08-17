#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers n separated by a separator
 * @n: numbers to be printed
 * @separator: the separator between the numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(args, int));
			break;
		}
		if (separator == NULL)
			printf("%d\n", va_arg(args, int));
		else
			printf("%d%s", va_arg(args, int), separator);
	}

	va_end(args);


}
