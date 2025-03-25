#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - Custom printf function with limited conversion specifiers
 * @format: Format string containing conversion specifiers
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    if (format == NULL)
        return -1;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
                count += print_char(args);
            else if (*format == 's')
                count += print_string(args);
            else if (*format == '%')
                count += print_percent(args);
            else if (*format == 'd' || *format == 'i')
                count += print_integer(args);
            else
            {
                _putchar('%');
                _putchar(*format);
                count += 2;
            }
        }
        else
        {
            _putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}

