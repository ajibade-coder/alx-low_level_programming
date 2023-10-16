#include "main.h"

/**
 * _islower - it indicates lowercase and uppercase by returning one or  zero
 *
 * @c: the int to check if it is lower or uppercase
 *
 * Return: it returns one or zero
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
