#include "main.h"

/**
*choose_function - selects the appropriate print function based on format specifier
*@spec: format specifier character
*@args: list of arguments
*
*Return: number of characters printed
*/
int choose_function(char spec, va_list args)
{
	int i;
	printer_t formats[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage},
		{'\0', NULL}
	};

	for (i = 0; formats[i].spec != '\0'; i++)
	{
		if (formats[i].spec == spec)
			return (formats[i].func(args));
	}

	_putchar('%');
	_putchar(spec);
	return (2);
}
