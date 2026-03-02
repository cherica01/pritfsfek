#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int len1;
    int len2;
    int x;

    x = 42;
    printf("\n=== TESTS FT_PRINTF ===\n\n");

    len1 = printf("Vrai printf: Hello World\n");
    len2 = ft_printf("ft_printf : Hello World\n");
    printf("Longueurs: vrai=%d, ft=%d\n\n", len1, len2);

    len1 = printf("Vrai printf: 100%%\n");
    len2 = ft_printf("ft_printf : 100%%\n");
    printf("Longueurs: vrai=%d, ft=%d\n\n", len1, len2);

    len1 = printf("Vrai printf: %c %c %c\n", 'A', 'B', 'C');
    len2 = ft_printf("ft_printf : %c %c %c\n", 'A', 'B', 'C');
    printf("Longueurs: vrai=%d, ft=%d\n\n", len1, len2);

    len1 = printf("Vrai printf: %s\n", "Hello 42");
    len2 = ft_printf("ft_printf : %s\n", "Hello 42");
    printf("Longueurs: vrai=%d, ft=%d\n\n", len1, len2);

    len1 = printf("Vrai printf: %s\n", (char *)NULL);
    len2 = ft_printf("ft_printf : %s\n", (char *)NULL);
    printf("Longueurs: vrai=%d, ft=%d\n\n", len1, len2);

    len1 = printf("Vrai printf: %d %d %d\n", 42, -42, 0);
    len2 = ft_printf("ft_printf : %d %d %d\n", 42, -42, 0);
    printf("Longueurs: vrai=%d, ft=%d\n\n", len1, len2);

    len1 = printf("Vrai printf: %u %u %u\n", 42, -42, 0);
    len2 = ft_printf("ft_printf : %u %u %u\n", 42, -42, 0);
    printf("Longueurs: vrai=%d, ft=%d\n\n", len1, len2);

    len1 = printf("Vrai printf: %x %x %x\n", 255, 16, 0);
    len2 = ft_printf("ft_printf : %x %x %x\n", 255, 16, 0);
    printf("Longueurs: vrai=%d, ft=%d\n\n", len1, len2);

    len1 = printf("Vrai printf: %X %X %X\n", 255, 16, 0);
    len2 = ft_printf("ft_printf : %X %X %X\n", 255, 16, 0);
    printf("Longueurs: vrai=%d, ft=%d\n\n", len1, len2);

    len1 = printf("Vrai printf: %p\n", &x);
    len2 = ft_printf("ft_printf : %p\n", &x);
    printf("Longueurs: vrai=%d, ft=%d\n\n", len1, len2);

    len1 = printf("Vrai printf: %p\n", NULL);
    len2 = ft_printf("ft_printf : %p\n", NULL);
    printf("Longueurs: vrai=%d, ft=%d\n\n", len1, len2);

    len1 = printf("Vrai printf: %c %s %d %u %x %p %%\n", 'Z', "test", 42, 123, 255, &x);
    len2 = ft_printf("ft_printf : %c %s %d %u %x %p %%\n", 'Z', "test", 42, 123, 255, &x);
    printf("Longueurs: vrai=%d, ft=%d\n", len1, len2);

    return 0;
}