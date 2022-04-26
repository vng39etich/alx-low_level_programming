#include "main.h"

/**
  * _memset - enter a constant byte to memory
  * @s: area to be filled in memory
  * @b: byte that is constant, to be filled
  * @n: memory area in bytes to fill
  *
  * Return: the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int 1 = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
