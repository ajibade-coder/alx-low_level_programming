#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers,
 * followed by a new line.
 * @separator: parameter for the string to be printed
 * @n: list size parameter
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	if (n == 0)
		return;

	va_start(list, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(list, int));
		if (i == n - 1)
		{
			printf("\n");
			continue;
		}
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
}
