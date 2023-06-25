#include "main.h"
#include <stdint.h>



int _printf(const char *format, ...)
{
	int output_chars;

	converter funct_list[] =	{
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
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


