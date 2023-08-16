#include "calc.h"

/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user.
 *
 * @s: string parameter
 * Return: a pointer to the function that corresponds to
 * the operator given as a parameter
 */


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i = 0 ; i < 5)
	{
		if (op_t ops[i][0] == s)
			return ((*op_t ops[i][1])(int, int));
		i++;
	}
	return (NULL);
}
