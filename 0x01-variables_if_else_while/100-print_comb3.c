#include <stdio.h>
/**
 * main - excution program
 *
 * Return: always zero
 */

int main(void)
{
	int num;

	for (int num  = 0 ; num  <= 9 ; num++)
	{
		for (int j = num + 1; j <= 9; j++)
		{
			putchar('0' + num);
			putchar('0' + j);
			if (num < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
