#include "main.h"
#include <stdarg.h>

/**
 *_printf - replication of the function printf
 *@format: character string
 *Return: returns the number of characters printed
 */

int _printf(const char *format, ...)
{
	format_specifier_t specifiers[] = {
		{'c', _printf_char}, {'s', printf_string},
		{'d', _printf_deci}, {'i', printf_int},
		{'%', _printf_percent}, {'\0', NULL},
	};
	va_list args;
	int j, i, counter;

	i = 0, counter = 0;

	if (format == NULL || format[0] == '\0')
		return (-1);

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			counter += _putchar(format[i]);
		else
		{
			for (j = 0; specifiers[j].specifier != '\0'; j++)
			{
				if (format[i + 1] == specifiers[j].specifier)
				{
					counter += specifiers[j].func(args);
					i++;
					break;
				}
			}
			if (specifiers[j].specifier == '\0')
			{
				counter += _putchar(format[i]);
				counter += _putchar(format[i + 1]);
				va_arg(args, int *);
				i++;
			}
		} i++;
	}
	va_end(args);
	return (counter);
}
