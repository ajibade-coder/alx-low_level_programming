#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int lenDest, lenSrc;

	for (lenDest = 0; dest[lenDest] != '\0'; lenDest++)
		;

	for (lenSrc = 0; src[lenSrc] != '\0'; lenSrc++)
	{
		dest[lenDest] = src[lenSrc];
		lenDest++;
	}

	dest[lenDest] = '\0';
	return (dest);
}
