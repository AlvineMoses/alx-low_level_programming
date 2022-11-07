#include "main.h"

/**
 * _isalpha - int c
 * @c: character to be checked
 *
 * Description: checkse for lower and upeecase alpha
 * Return: 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
