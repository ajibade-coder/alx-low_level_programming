#include "main.h"
/**
 * print_last_digit - excution program func
 *
 * @last_num: arguement
 *
 * Return: num
 */

int print_last_digit(int last_num)
{
	int num;

	num = last_num % 10;
	if (last_num < 0)
		num = -num;
	_putchar(num + '0');
	return (num);
}
