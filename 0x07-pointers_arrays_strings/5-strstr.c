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
	return (0);
}
