#include <unistd.h>

/**
 * _putchar - function to print char
 * @c: char
 * Return: value
 */

int _putchar(char *c)
{
	return (write(1, &c, 1));
}
