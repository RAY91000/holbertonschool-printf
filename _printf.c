#include "main.h"
#include <stdarg.h>

/**
 *_printf - 
 *@format:
 *return:
 */

typedef struct format_specifier {
	char specifier;
	int (*func)(va_list);
}

format_specifier_t;

format_specifier_t specifiers[] = {
	{'i', _printf_char},
	{'s', printf_string},
	{'d',_printf_deci},
	{'i', printf_int},
	{'%', _printf_percent},
	{'\0', NULL},
};

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0; int j;
	int counter = 0;

	if (format == NULL || format[0] == '\0')
	{
		return (-1);
	}

	va_start(args, format);
	while (format[i] != '\0') {
		if (format[i] != '%') {
			counter += _putchar(format[i]);
		}
	else {
		for (j = 0; specifiers[j].specifier != '\0'; j++) {
			if (format[i + 1] == specifiers[j].specifier) {
				counter += specifiers[j].func(args);
				i++;
				break;
	}
	}
		if (specifiers[j].specifier == '\0') {
			counter += _putchar(format[i]);
			counter += _putchar(format[i + 1]);
			i++;
		}
	}
	i++;
	}
va_end(args);
return counter;
}
