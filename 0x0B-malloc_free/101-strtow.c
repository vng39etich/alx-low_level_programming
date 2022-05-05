#include <stdlib.h>
#include "main.h"

/**
* **strtow - function that splits a string into words.
* @str : pointer
* Return: Char
*/

char **strtow(char *str)
{
	char **d;
	int m;
	int n = 0;
	int con = 0;

	if (str == NULL)
		return (NULL);

	for (m = 0 ; str[m] != '\0' ; m++)
	{
		if (str[m] != 32)
			con++;
	}

	d = malloc(sizeof(char) * con);

	if (d == NULL)
		return (NULL);

	for (m = 0 ; str[m] != '\0' ; m++)
	{
		if (str[m] != 32)
		{
			*d[n] = str[m];
			n++;
		}
		else
		{
		}
	}
	return (d);
}
