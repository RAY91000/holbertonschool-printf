#include "main.h"
/**
 *_printf_char - function that prints a single character
 *@args: function argument
 *Return: 0 = Success
 */
int _printf_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (0);
}
