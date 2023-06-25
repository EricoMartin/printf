#include "main.h"

/**
 * print_char - Prints character
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_char(va_list args)
{
	char value;

	value = va_arg(args, int);
	_putchar(value);
	return (1);
}

/**
 * print_string - Prints a srting of characters
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_string(va_list args)
{
	int i;
	const char *s;

	s = va_arg(args, const char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * print_integer - Prints an integer
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}


