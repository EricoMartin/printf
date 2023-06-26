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
 * print_i - this prints a specified integer from variadic parameters
 * @args: variadic parameter
 *
 * Return: characters number if successful
 */

int print_i(va_list args)
{
        int i = 1;
        int count = 0;
        int numb;
	unsigned int n;


        numb = va_arg(args, int); /* this looks for integer from variadic parameters */

        if (numb > 0) 
        {
                
		n = numb; /* This will assign an integer that is not negative */
        }
	else
	{
		count = count + _putchar('-');
		n = numb * -1; /* This will evaluate to zero */
	}

        while (n/i > 9)
		i = i * 10; /* While the number is greater than 9 multiply our iterator by 10 
			     * This will help to do proper printing of the number
			     * ie. Tens, Hundreds, Thousands etc.
			     */

	while (i != 0) /* While iterator is not equal to zero */
	{
		/* Assign count the value of itself in addition to the evaluation of 0 plus
		 * the number divided by the iterator value  */
		count = count + _putchar('0' + n / i);
		n = n % i; /* base condition for reducing n */
		i = i / 10; /* base condition for reducing i */
	}

        return (count);
}
