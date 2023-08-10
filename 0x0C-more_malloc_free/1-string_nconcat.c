#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	nconcat = malloc(sizeof(char) * (len + 1));

	if (nconcat == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (index = 0; s1[index]; index++)
	{
		nconcat[len++] = s1[index];
	}

	for (index = 0; s2[index] && index < n; index++)
	{
		nconcat[len++] = s2[index];
	}

	nconcat[len] = '\0';

	return (nconcat);
}
