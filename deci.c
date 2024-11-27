#include "main.h"

/**
 *_printf_deci - function that prints decimals
 *@ap: contains decimals
 *Return: the number of printed decimals
 */
int _printf_deci(va_list ap)
{
	int n = va_arg(ap, int);
	int counter = 0;
	unsigned int num = n;
	int div = 1;

	if (n < 0)
	{
		_putchar(-n);
		counter++;
		num = -num;
	}
	while (num / div > 9)
		div *= 10;
	while (div != 0)
	{
		counter += _putchar((num / div) + '0');
		div /= 10;
	}
	return (counter);
}
