#include "main.h"
/*_printf - Basically a copy of the printf function
 *@format: character string
 *Return: 
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int count = 0;

	if (format == NULL || format[0] == '\0' ||
	(format [0] = '%' && format[1] = '\0'))
	       return (-1);
	va_start(args, format);

	for (i = 0, format[i] != '\0', i++)
	{
		if (format[i] = '%')
		{
				
