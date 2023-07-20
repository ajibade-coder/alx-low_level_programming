#include "main.h"
/**
 * print_numbers - excution program
 *
 * Return: void
 */


void print_numbers(void)
{
	int num;

	for (num = 0 ; num <= 9 ; num++)
		_putchar(num + '0');
	_putchar('\n');
}
