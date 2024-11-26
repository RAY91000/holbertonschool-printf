#include "main.h"

/**
 * printf_string - print a string
 * @args: containing the string
 *
 * Return: number of charcter to print.
 */

int printf_string(va_list args)
{
	int counter = 0;
	char *s = va_arg(args, char *);
	if (s == NULL)
		s = "(NULL)";
	while (s[counter])
	{
		_putchar(s[counter++]);
	}
	return (counter);
}
