#include "main.h"
/* betty style doc for function main goes there */
/**
 * positive_or_negative - excution program
 *
 * @n: arguement
 *
 * Return: always zero
 */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
