#include "main.h"
/**
 * print_rev - entry program
 *
 * @s: parameter
 */


void print_rev(char *s)
{
	int a;
	int count = 0;


	for (a = 0 ; s[a] != '\0' ; a++)
	{
		count++;
	}
	for (a =  count  ; count >= 0 ; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
