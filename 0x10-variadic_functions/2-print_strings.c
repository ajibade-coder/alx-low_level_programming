#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings,
 * followed by a new line
 *
 * @separator: string separator  parameter
 * @n: parameter for number of strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *word;

	va_list string;

	va_start(string, n);

	for (i = 0 ; i < n ; i++)
	{
		word = va_arg(string, char *);

		if (word == NULL)
			printf("(nil)");
		else
			printf("%s", word);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
