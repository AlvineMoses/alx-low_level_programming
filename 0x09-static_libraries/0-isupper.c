#include "main.h"

/**
 * _isupper - checks for upper case letters
 * @c: character
 * Description: uses the isupper option
 * Return: 1 if upper case, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
