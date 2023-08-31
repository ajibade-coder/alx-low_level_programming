#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - zero
 * If little-endian - one
 */

int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
