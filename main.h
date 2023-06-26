#ifndef PRINT_F
#define PRINT_F

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @symbol: The  arithmetic symbol
* @f: The function associated
*/
struct convert
{
	char *symbol;
	int (*f)(va_list);
};
typedef struct convert converter;

int _printf(const char *format, ...);
int _putchar(char c);
void _vprintf(const char *format, va_list args);
int parser(const char *format, converter funct_list[], va_list args);
int print_char(va_list);
int print_string(va_list args);
int print_percent(va_list);
int print_num(va_list args);
int print_i(va_list args);

#endif
