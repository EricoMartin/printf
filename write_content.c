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
 * print_percent - Prints a perecntage sign
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}

/**
 * print_num - this prints a specified integer from variadic parameters
 * @args: variadic parameter
 *
 * Return: characters number if successful
 */

int print_num(va_list args)
{
	int i = 1;
	int count = 0;
	int numb;
	unsigned int n;

	numb = va_arg(args, int);

	if (numb > 0)

	{
		n = numb; /* This will assign an integer that is not negative */
	}
	else
	{
		count = count + _putchar('-');
		n = numb * -1; /* This will evaluate to zero*/
	}

	for ( ; n / i > 9; )
		i = i * 10;

	for ( ; i != 0; ) /* While iterator is not equal to zero */
	{
		count = count + _putchar('0' + n / i);
		n = n % i; /* base condition for reducing n */
		i = i / 10; /* base condition for reducing i */
	}
	return (count);
}

/**
 * print_i - print formatted characters
 * @args: variable argument list
 * Return: an Integer charcter
 */

int print_i(va_list args)
{
	int n;

	n = print_num(args);
	return (n);
}
