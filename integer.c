#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"
/**
 * print_integer - prints an integer
 * @args: va_list of arguments
 *
 * Return: number of characters printed
 */
int print_integer(va_list args)
{
    int n = va_arg(args, int);
    int count = 0;
    unsigned int num;
    char buffer[20];
    int index = 0;

    if (n < 0)
    {
        _putchar('-');
        count++;
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num == 0)
    {
        _putchar('0');
        return 1;
    }

    while (num > 0)
    {
        buffer[index++] = (num % 10) + '0';
        num /= 10;
    }

    count += index;

    while (index > 0)
    {
        _putchar(buffer[--index]);
    }

    return count;
}
