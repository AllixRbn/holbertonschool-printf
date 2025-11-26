#include "main.h"
#include <stdio.h>

/**
 * print_int - prints an integer
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	long n = (long)va_arg(args, int);
	long num = n;
	char table[20];
	int i = 0, count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	while (num > 0)
	{
		table[i++] = (num % 10) + '0';
		num /= 10;
	}

	while (i > 0)
	{
		i--;
		_putchar(table[i]);
		count++;
	}

	return (count);
}
