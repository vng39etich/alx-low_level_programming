#include "main.h"
/**
 * _strspn - prints characters of string1 found in string2.
 * @s: string source
 * @accept: string identification
 *
 * Return: new string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (y = 0; *(s + y); y++)
	{
		for (x = 0; *(accept + x); x++)
		{
			if (*(s + y) == *(accept + x))
				break;
		}
	if (*(accept + x) == '\0')
		break;
	}
	return (y);
}
