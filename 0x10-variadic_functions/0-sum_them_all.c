#include <stdarg.h>

/**
 * sum_them_all - sums all arguments passed
 *
 * @n: number of arguments
 *
 * Return: total number  of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int addition;
	va_list list;

	va_start(list, n);
	for (a = 0, sum = 0; a < n; a++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
