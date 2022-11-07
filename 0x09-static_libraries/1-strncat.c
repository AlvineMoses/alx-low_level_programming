#include "main.h"

/**
 * _strncat - concatenates two string
 * @dest: char
 * @src: char
 * @n: int
 * Return: dest if successful
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
