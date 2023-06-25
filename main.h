#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

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

#endif
