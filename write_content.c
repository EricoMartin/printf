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
        int i = 0;
        int count = 0;
        int numb;
        int my_arr[10];
        char x[1];

        numb = va_arg(args, int); /* this looks for integer from variadic parameters */

        while (numb != 0) /* this breaks the numbers into bits and places them in an array*/
        {
                my_arr[i] = (numb % 10);
                numb = numb / 10;
                if (numb == 0)
                        break;
                else
                        i++;
        }

        for (1; 1 >= 0; i--) /* for sends the  array's content to stdoout */
        {
                x[0] = ('0' + my_arr[i]); /* convers int into char*/
                count += write(1, x, 1);
        }

        return (count);
}
