#ifndef main_h
#define main_h
#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _printf_char(va_list args);
int _printf_percent(va_list args);
#endif
