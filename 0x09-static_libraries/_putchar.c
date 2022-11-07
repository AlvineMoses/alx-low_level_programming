#include <unistd.h>
/**
 * _putchar writethe character to stdout
 * @c- the character
 * Return: on success1
 * On eror -1 is returnedand errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
