#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int print_char(va_list args);
int print_string (va_list str);
int print_percentage(va_list args);
int choose_function(char spec, va_list args);
int print_int(va_list args);
int _printf(const char *format, ...);


/** 
* struct printer : struct for choosing the right print function.
* @symbol: format symbol.
* @print: function pointer to the corresponding print function.
*/

typedef struct printer
{
    char symbol;
    int (*print)(va_list args);
} printer_t;


#endif
