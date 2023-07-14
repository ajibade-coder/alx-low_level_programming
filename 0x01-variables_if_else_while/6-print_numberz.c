#include <stdio.h>
/**
 * main - excution programm
 *
 * Return: always zero
 */

int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
