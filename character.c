#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"
/**
 * print_char - prints a single character
 * @args: va_list of arguments
 *
 * Return: number of characters printed
 */
int print_char(va_list args)
{
    char c = va_arg(args, int);
    return _putchar(c);
}
