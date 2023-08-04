#include <stdio.h>
#include <stdlib.h>


/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the numbers contain only digits - 0.
 *         If one of the numbers contains non-digits - 1.
 */
int main(int argc, char *argv[])
{
	int i;
	int answer;
	int zero = 0;

	for (i = 0 ; i <= argc - 1 ; i++)
	{
		if ((*argv[i] >= 'a' && *argv[i] <= 'z') ||
		(*argv[i] >= 'A' && *argv[i] <= 'Z'))
		{
			printf("Error\n");
			return (1);
		}
	}
	if (argc == 1)
	{
		printf("%d\n", zero);
	}

	else
	{
		for (i = 1 ; i <= argc - 1 ; i++)
		{
			answer += atoi(argv[i]);
		}
		printf("%d\n", answer);
	}
	return (0);
}


