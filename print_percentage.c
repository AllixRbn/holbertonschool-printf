#include "main.h"

/**
 * print_percentage - prints a percentage symbol
 * @args: list of arguments
 * Return: number of characters printed
 */
int print_percentage(va_list args)
{
    (void)args
    /* This parameter is unused since it's only to print the % symbol.
    * But in order to maintain a consistency throughout the printf function
    * we still add this parameter.*/

    _putchar('%');
    return (1);
}
