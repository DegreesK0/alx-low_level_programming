#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @n: numbers to be printed
 * @separator: the separator between the numbers
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else if (separator == NULL || i == n - 1)
			printf("%s", str);
		else
			printf("%s%s", str, separator);
	}

	va_end(args);

	printf("\n");
}
