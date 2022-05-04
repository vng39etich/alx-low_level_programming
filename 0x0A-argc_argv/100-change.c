#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the least  number of coins to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if the number of arguments passed to the program is not exactly 1,
 * otherwise return 0
 */

int main(int argc, char *argv[])
{
	int m, n, cent = 0;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	if (m < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (n = 0; n < 5; n++)
		{
			if (m >= change[n])
			{
				m -= change[n];
				cent += 1;
				if (m >= change[n])
				{
					n--;
				}
				else if (m == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", cent);
		return (0);
	}
}
