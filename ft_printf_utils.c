#include "ft_printf.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

int ft_putchar(char c)
{
    return write(1, &c, 1);
}

int ft_putstr(char *str)
{
    int i;

    i = 0;
    if (!str)
        return ft_putstr("(null)");
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return i;
}

int ft_putnbr(int n)
{
    int count;
    long nb;

    count = 0;
    nb = n;
    if (nb < 0)
    {
        count += ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
        count += ft_putnbr(nb / 10);
    count += ft_putchar((nb % 10) + '0');
    return count;
}

int ft_putnbr_unsigned(unsigned int n)
{
    int count;

    count = 0;
    if (n >= 10)
        count += ft_putnbr_unsigned(n / 10);
    count += ft_putchar((n % 10) + '0');
    return count;
}

int ft_puthex(unsigned long n, char format)
{
    int count;
    char *hex_digits;

    count = 0;
    if (format == 'X')
        hex_digits = "0123456789ABCDEF";
    else
        hex_digits = "0123456789abcdef";
    if (format == 'p')
    {
        count += ft_putstr("0x");
        format = 'x';
    }
    if (n >= 16)
        count += ft_puthex(n / 16, format);
    count += ft_putchar(hex_digits[n % 16]);
    return count;
}