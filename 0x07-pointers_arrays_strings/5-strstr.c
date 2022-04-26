#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring.
 * @haystack: string source
 * @needle: string locating
 *
 * Return: new string
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
}
/**
 * coincidence - define if the string b is inside a.
 * @x: source string
 * @y: string to be searched
 *
 * Return: 1 if there is coincidence, otherwise 0.
 */
int coincidence(char *a, char *b)
{
	while (*b && *b == *a)
	{
		b++;
		a++;
	}

	if (*b == '\0')
		return (1);
	else
		return (0);
}
