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
typedef struct convert conver_t;

int _printf(const char *format, ...);
int _putchar(char c);
void _vprintf(const char *format, va_list args);
int parser(const char *format, conver_t funct_list[], va_list args);
int print_char(va_list);
int print_string(va_list args);
int print_percent(va_list);
int print_num(va_list args);
int print_i(va_list args);
int print_binary(va_list);

#endif
