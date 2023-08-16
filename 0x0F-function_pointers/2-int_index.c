#include "function_pointers.h"
/**
 * int_index -  a function that searches for an integer.
 * @array: parameter for array arguement
 * @size: parameter for size of array arguement
 * @cmp: function pointer
 * Return: index of the first element for which the cmp
 * function does not return 0
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);

	for (index = 0 ; index < size ; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}
	return (-1);
}

