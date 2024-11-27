#include "main.h"
#include <stdarg.h>
/**
 *_printf_deci - function that prints decimals
 *@ap: contains decimals
 *Return: the number of printed decimals
 */

#include <stdarg.h>

int _printf_deci(va_list ap)
{
	int n = va_arg(ap, int);
	int num = n;
	int len = 0;
	int div = 1;

	if (n < 0)
	{
		len += _putchar('-');
		num = -num;
	}
	while (num / div > 9)
		div *= 10;
	while (div != 0)
	{
		len += _putchar((num / div) + '0');
		num %= div;
		div /= 10;
	}
	return (len);
}
