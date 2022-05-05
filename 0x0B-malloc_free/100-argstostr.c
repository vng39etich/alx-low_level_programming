#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *@ac: number of arguments
 *@av: arguments
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int a;
	int b;
	char *p = NULL;
	int x;
	int ext;

	x = 0;
	ext = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			ext++;
		}
	}

	p = (char *)malloc(ext + ac + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			p[x] = av[a][b];
			x++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}

