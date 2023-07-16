#include <stdio.h>
/**
 * main - excute program
 *
 * Return: Always zero
 */

int main(void)
{
	int num;
	int num_2;

	for (num = 0; num < 9; num++)
	{
		for (num_2 = num + 1; num_2 < 10; num_2++)
		{
			putchar((num % 10) + '0');
			putchar((num_2 % 10) + '0');

			if (num == 8 && num_2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
