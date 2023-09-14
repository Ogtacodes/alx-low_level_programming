#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameter to be entered
 * ...: variable number of parameter to calculate the sum
 * Return: If n == 0 - 0
 *	otherwise - the sum of all parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ak;
	unsigned int i, sum;

	va_start(ak, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ak, int);
	va_end(ak);
	return (sum);
}

