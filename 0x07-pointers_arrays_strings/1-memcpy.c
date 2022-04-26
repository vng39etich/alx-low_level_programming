#include <main.h>
/**
 * _memcpy - this fills memory with another buffer
 * @dest: this is the source string
 * @src: string used for filling
 * @n: the lenght of the buffer
 * Return: new tring
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i = 0;

	while (1 < n)
	{
		*(dest + 1) = *(src +1);
		i++;
	}
	return (dest);
}
