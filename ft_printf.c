#include "ft_printf.h"

static int handle_conversion(va_list args, char specifier)
{
    int count;

    count = 0;
    if (specifier == 'c')
        count += ft_putchar(va_arg(args, int));
    else if (specifier == 's')
        count += ft_putstr(va_arg(args, char *));
    else if (specifier == 'p')
        count += ft_puthex((unsigned long)va_arg(args, void *), 'p');
    else if (specifier == 'd' || specifier == 'i')
        count += ft_putnbr(va_arg(args, int));
    else if (specifier == 'u')
        count += ft_putnbr_unsigned(va_arg(args, unsigned int));
    else if (specifier == 'x')
        count += ft_puthex(va_arg(args, unsigned int), 'x');
    else if (specifier == 'X')
        count += ft_puthex(va_arg(args, unsigned int), 'X');
    else if (specifier == '%')
        count += ft_putchar('%');
    return count;
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int i;
    int count;

    if (!format)
        return -1;
    i = 0;
    count = 0;
    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (!format[i])
                break;
            count += handle_conversion(args, format[i]);
        }
        else
        {
            count += ft_putchar(format[i]);
        }
        i++;
    }
    va_end(args);
    return count;
}