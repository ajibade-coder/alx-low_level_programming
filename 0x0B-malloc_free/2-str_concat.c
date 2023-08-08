#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatenates two strings
 * @s1: first string parameter
 * @s2 : 2nd string parameter
 *
 * Return: the program returns null if memory allocation fails,
 * else it return the concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	int ln = 0;
	int count;
	int lastConcat = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (count = 0 ; s1[count] || s2[count] ; count++)
		ln++;
	concat = (char *) malloc(sizeof(int) * ln);

	if (concat == NULL)
		return (NULL);

	for (count = 0 ; s1[count] ; count++)
		concat[lastConcat++] = s1[count];
	for (count = 0 ; s2[count] ; count++)
		concat[lastConcat++] = s2[count];
	return (concat);
}
