#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  function returns a pointer to a new string,
 *  which is a duplicate of the string str.
 *
 *  @str: parameter for a string
 *
 *  Return: if str arguement equals null or memory allocation fails
 *  return NULL,
 *  else returns a pointer to a new string
 *  which is a duplicate of the string str.
 */


char *_strdup(char *str)
{
	int i = 0;
	int j;
	char *string;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			i++;
		}
		string = (char *)  malloc((i + 1) * sizeof(char));
		if (string == NULL)
		{
			return (NULL);
		}
		else
		{
			for (j = 0 ; j < i ; j++)
			{
				string[j] = str[j];
			}
			string[i] = '\0';
			return (string);
		}
	}
}
