#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - main entry point of the program
 * @argc: count of command line arguments
 * @argv: vector containing command line arguments
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	int n1, n2, result;
	char operator;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	operator = *argv[2];
	if ((operator == '/' || operator == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = f(n1, n2);
	printf("%d\n", result);
	return (0);
}

