#include <unistd.h>

/**
 * _putchar - A function that writes char to stdout
 * @c: character to print
 * Return: an Integer
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
