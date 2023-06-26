#include "main.h"
#include <stdint.h>

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
{
	int output_chars;

	converter funct_list[] =	{
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_i},
		{"d", print_i},
		{NULL, NULL}
	};

	va_list args;


	if (format == NULL)
		return (-1);

	va_start(args, format);

	/** call a parser function*/

	output_chars = parser(format, funct_list, args);
	va_end(args);

	return (output_chars);
}
