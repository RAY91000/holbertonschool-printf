#ifndef main_h
#define main_h
#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _printf_char(va_list args);
int printf_string(va_list args);
int _printf_percent(va_list args);
int printf_int(va_list ap);
int _printf_deci(va_list ap);

typedef struct format_specifier
{
	char specifier;
	int (*func)(va_list);
}
format_specifier_t;
#endif
