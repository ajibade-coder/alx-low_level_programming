#include "main.h"

/**
 * print_alphabet - prints alphabet from a to z, ending with a new line
 *
 * Return: always zero
 */


void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
