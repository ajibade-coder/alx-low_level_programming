#include "main.h"

/**
 * jack_bauer - excution program
 *
 * Return: void
 */



void jack_bauer(void)
{
	int digit1, digit2;

	for (digit1 = 0 ; digit1 < 24 ; digit1++)
	{
		for (digit2 = 0 ; digit2 < 60 ; digit2++)
		{
			_putchar(digit1 / 10 + '0');
			_putchar(digit1 % 10 + '0');
			_putchar(':');
			_putchar(digit2 / 10 + '0');
			_putchar(digit2 % 10 + '0');
			_putchar('\n');
		}

	}

}
