#include <stdio.h>
/**
 * main - excution program
 *
 * Return: always zero
 */

int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
