#include "main.h"

/**
 * _strcat - concatantes two strings
 * @dest: char
 * @src: char
 * Return: dest if successful
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
