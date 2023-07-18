#include <stdio.h>

/**
 * main - excution program
 *
 *
 * Return: Always zero
 */
int main(void)
{
	unsigned long num = 0, num_2 = 1, total_num;
	float tot_num;

	while (1)
	{
		total_num = num + num_2;
		if (total_num > 4000000)
			break;

		if ((total_num % 2) == 0)
			tot_num += total_num;

		num = num_2;
		num_2 = total_num;
	}
	printf("%.0f\n", tot_num);

	return (0);
}
