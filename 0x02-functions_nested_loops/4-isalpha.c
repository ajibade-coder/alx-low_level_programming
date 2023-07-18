#include "main.h"

/**
 * _isalpha - this checks if arguement is lowercase,uppercase or any character
 *
 * @c: arguement to check in other to group it
 *
 * Return: this retuns zero or one based on the argument after logic process
 */



int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
