#include <stdio.h>

/**
 * main - excution program
 *
 * Return: Always zero
 */

int main(void)
{
	int num, num_2, num_3;

	for (num = 0; num < 8; num++)
	{
		for (num_2 = num + 1; num_2 < 9; num_2++)
		{
			for (num_3 = num_2 + 1; num_3 < 10; num_3++)
			{
				putchar((num % 10) + '0');
				putchar((num_2 % 10) + '0');
				putchar((num_3 % 10) + '0');

				if (num == 7 && num_2 == 8 && num_3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
