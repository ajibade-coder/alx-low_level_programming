#include "main.h"

/**
 * _strncpy - Copy a string starting from index 0 of `dest`.
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: `dest` edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; len < n && src[len] != '\0'; len++)
		dest[len] = src[len];

	for (; n > len; len++)
		dest[len] = '\0';

	return (dest);
}
