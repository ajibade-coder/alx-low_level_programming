#include "main.h"
/**
 * swap_int - entry program
 *
 * @a: first parameter
 * @b: 2nd parameter
 */



void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
