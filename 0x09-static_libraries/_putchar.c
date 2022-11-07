#include "main.h"
#include <unistd.h>

/**
 * _putchar: writes a character c to stdout
 * c: is the character to be written
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
