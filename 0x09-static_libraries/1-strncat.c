#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, len_2;

	for (len = 0; dest[len] != '\0'; len++)
		;

	for (len_2 = 0; src[len_2] != '\0' && n > 0; len_2++, n--, len++)
	{
		dest[len] = src[len_2];
	}
	return (dest);
}
