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
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

