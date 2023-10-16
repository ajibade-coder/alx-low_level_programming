#include "main.h"

/**
 * _abs - excution program func for absolute num
 *
 * @num: giving arguement
 *
 * Return: it results in a postive num
 */


int _abs(int num)
{
	if (num > 0)
		return (num);
	else
		return (num * -1);
	_putchar('\n');
}
