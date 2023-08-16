#include "function_pointers.h"
/**
 * array_iterator - unction that executes a function given
 * as a parameter on each element of an array.
 *
 * @array: parameter for the name of array
 * @size: parameter for the size of the array
 * @action: parameter for the pointer function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL || action == NULL)
		return;

	for (index = 0; index < size ; index++)
		action(array[index]);
}
