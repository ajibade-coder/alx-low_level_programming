#include <stdio.h>

/**
 * main - excution program
 *
 *
 * Return: Always zero
 */
int main(void)
{
	int count;
	unsigned long num = 0, num_2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = num + num_2;
		printf("%lu", sum);

		num = num_2;
		num_2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
