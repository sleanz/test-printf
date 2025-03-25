#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"
/**
 * print_string - prints a string
 * @args: va_list of arguments
 *
 * Return: number of characters printed
 */
int print_string(va_list args)
{
    char *str = va_arg(args, char *);
    int count = 0;

    if (str == NULL)
        str = "(null)";

    while (*str)
    {
        _putchar(*str);
        str++;
        count++;
    }
    return count;
}
