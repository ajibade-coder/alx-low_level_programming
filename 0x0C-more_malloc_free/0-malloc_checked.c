#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that return a pointer to the allocated memory
 *
 * @b: size of allocated memory
 *
 * Return: it returns a pointer to the allocated merroy
 */


void *malloc_checked(unsigned int b)
{
	void *allocate;

	allocate = malloc(b);
	if (allocate == NULL)
	{
		exit(98);
	}
	return (allocate);
}
