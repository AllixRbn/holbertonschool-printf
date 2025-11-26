#include "main.h"
#include <stdio.h>

/**
*choose_function - selects the appropriate print function based on format specifier
*@spec: format specifier character
*@args: list of arguments
*
*Return: number of characters printed
*/
int choose_function(char spec, va_list args)
{
	int i = 0;
	printer_t formats[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};

	while (formats[i].symbol != '\0')
	{
		if (formats[i].symbol == spec)
		{
			return (formats[i].print(args));
		}
		i++;
	}

	_putchar('%');
	_putchar(spec);
	return (2);
}
