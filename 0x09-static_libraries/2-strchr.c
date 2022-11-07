#include "main.h"

/**
 * _strchr - function locates a charater in a string
 * @s: character
 * @c: character
 *
 * Return: c if first occurance is found
 * null if not found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
