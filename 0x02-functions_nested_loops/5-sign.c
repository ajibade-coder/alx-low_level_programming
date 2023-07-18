#include "main.h"

/**
 * print_sign - excution function program
 * @n: the number
 *
 * Return: result are one, zero and negative one
 */




int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
