#include "main.h"
#include <stdio.h>

/**
 * print_string - prints a string of characters
 * @str: list of arguments
 *
 * Return: number of characters printed
 */
int print_string (va_list str)
{
    int count = 0;
    char *str = va_arg(args, char *);

    if (str == NULL)
    {
        str = "(null)";
    }

    while (str[count] != '\0')
    {
        _putchar(str[count]);
        count++;
    }

    return(count);
}
