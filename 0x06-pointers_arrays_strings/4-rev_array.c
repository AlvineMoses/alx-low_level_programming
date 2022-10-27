#include "main.h"

/**
 * reverse_array - function that reverses the array of integers.
 *
 * @a: an array of integers
 * @n: number of elements to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	
	for (i = 0; i < n ;i++)
	{

	n --;
	j=a[i];
	a[i] = a[n];
	a[n] = j;

	}
}
