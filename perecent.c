#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"
/**
 * print_percent - prints a percent sign
 * @args: va_list of arguments (unused)
 *
 * Return: number of characters printed
 */
int print_percent(va_list args __attribute__((unused)))
{
    return _putchar('%');
}
