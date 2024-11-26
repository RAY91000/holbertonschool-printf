#include "main.h"
/**
 *_printf_percent - prints the % symbol 
 *@args: function argument
 *Return: 0 = Success
 */
int _printf_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
