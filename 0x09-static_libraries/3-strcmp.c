#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer of char type
 * @s2: same as above
 * Return: s1 - s2 if successful
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
