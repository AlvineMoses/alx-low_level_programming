#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * sum_them_all - A function that sums all its parameters.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list al;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(al, n);
	for (i = 0; i < n; i++)
		sum += va_arg(al, int);
	
	va_end(al);
	return (sum);
}
