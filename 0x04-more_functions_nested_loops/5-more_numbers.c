#include "main.h"
/**
 * more_numbers - excution program
 *
 * Return: void;
 */



void more_numbers(void)
{

int counter, num;
	for (counter = 1; counter <= 10; counter++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			_putchar('1');
			_putchar(num % 10 + '0');
		}
			_putchar('\n');
		}
}
