#include "main.h"
/**
 * _strchr - identifies the first occurrence of a character.
 * @s: string source
 * @c: character to identify
 *
 * Return: new string.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
