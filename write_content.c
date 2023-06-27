#include "main.h"
#include <stdio.h>

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
	int i;
	int count;
	int numb;
	unsigned int n;

	numb = va_arg(args, int);
	i = 1;
	count = 0;

	if (numb < 0)

	{
		count = count + _putchar('-');
                n = numb * -1; /* This will evaluate to zero*/
	}
	else
	{
		n = numb; /* This will assign an integer that is not negative */
	}

	while (n / i > 9)
		i = i * 10;

	while (i != 0) /* While iterator is not equal to zero */
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

/**
 * unsigned_integer - Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: a count of the numbers
 */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}

/**
 * print_binary - Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 * Return: The length of the number printed
 */
int print_binary(va_list list)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	i = 0;
	while (num > 0)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	i++;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}
