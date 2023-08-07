#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: parameter for size of array
 * @c: initialize char
 * Return: if size is 0  or array fails to create it returns NULL,
 * if array created return the pointer to the array
 */




char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array  = (char *) malloc(size *  sizeof(char));
		if (array == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0 ; i < size ; i++)
				array[i] = c;
			return (array);
		}
	}
}
