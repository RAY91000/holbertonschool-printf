#include "main.h"
/**
 *_printf - 
 *@format:
 *return:
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int counter = 0;

	if (format == NULL || format[0] == '\0' ||
			(format[0] == '%' && format[1] == '\0'))
		return (-1);
	
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++) {
		if (format[i] != '%') {
			counter += _putchar('%');
			counter += _putchar(format[i]);
	}
	else {
		counter += _putchar(format[i]);
	}
	}
va_end(args);
return counter;
}
