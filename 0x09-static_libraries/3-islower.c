#include "main.h"

/**
 * _islower - int c
 *@c: the character to be checked
 * Description: checks for lower case
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
