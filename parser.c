#include "main.h"

/**
 * parser - converts strings into formatted strings to be printed
 * @format: the format code for the string
 * @funct_list: a sructured list of character formats
 * @args: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */

int parser(const char *format, converter funct_list[], va_list args)
{
	int i, j, r_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right func*/
			for (j = 0; funct_list[j].symbol != NULL; j++)
			{
				if (format[i + 1] == funct_list[j].symbol[0])
				{
					r_val = funct_list[j].f(args);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (funct_list[j].symbol == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			_putchar(format[i]); /*call the write function*/
			printed_chars++;
		}
	}
	return (printed_chars);
}
