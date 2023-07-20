#include "main.h"

/**
 * _isupper - excution program
 *
 * @c: arguement
 *
 * Return: zero or one
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}

