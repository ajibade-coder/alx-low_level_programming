#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to zero
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at zero
 * Return: If an error occurs - -1.
 * else - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
