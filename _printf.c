#include "main.h"
#include <stdio.h>
/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}

		if (format[i] == '\0')
		{
			break;
		}

		count += choose_function(format[i], args);
		{
		i++;
		}
	}

	va_end(args);

	return (count);
}
