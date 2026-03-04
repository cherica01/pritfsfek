#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int len1;
    int len2;
    int x = 42;

    printf("\n=== TESTS AVEC MÊMES CHAÎNES ===\n\n");

    // Test 1 : Texte simple
    len1 = printf("Hello World\n");
    len2 = ft_printf("Hello World\n");
    printf("Vrai: %d, ft: %d\n\n", len1, len2);

    // Test 2 : Pourcentage
    len1 = printf("100%%\n");
    len2 = ft_printf("100%%\n");
    printf("Vrai: %d, ft: %d\n\n", len1, len2);

    // Test 3 : Caractères
    len1 = printf("%c %c %c\n", 'A', 'B', 'C');
    len2 = ft_printf("%c %c %c\n", 'A', 'B', 'C');
    printf("Vrai: %d, ft: %d\n\n", len1, len2);

    // Test 4 : Chaîne
    len1 = printf("%s\n", "Hello 42");
    len2 = ft_printf("%s\n", "Hello 42");
    printf("Vrai: %d, ft: %d\n\n", len1, len2);

    // Test 5 : Chaîne NULL
    len2 = ft_printf("%s\n", (char *)NULL);
    printf("ft seulement: %d\n\n", len2);

    // Test 6 : Nombres
    len1 = printf("%d %d %d\n", 42, -42, 0);
    len2 = ft_printf("%d %d %d\n", 42, -42, 0);
    printf("Vrai: %d, ft: %d\n\n", len1, len2);

    // Test 7 : Unsigned
    len1 = printf("%u %u %u\n", 42, -42, 0);
    len2 = ft_printf("%u %u %u\n", 42, -42, 0);
    printf("Vrai: %d, ft: %d\n\n", len1, len2);

    // Test 8 : Hex minuscules
    len1 = printf("%x %x %x\n", 255, 16, 0);
    len2 = ft_printf("%x %x %x\n", 255, 16, 0);
    printf("Vrai: %d, ft: %d\n\n", len1, len2);

    // Test 9 : Hex majuscules
    len1 = printf("%X %X %X\n", 255, 16, 0);
    len2 = ft_printf("%X %X %X\n", 255, 16, 0);
    printf("Vrai: %d, ft: %d\n\n", len1, len2);

    // Test 10 : Pointeur
    len1 = printf("%p\n", &x);
    len2 = ft_printf("%p\n", &x);
    printf("Vrai: %d, ft: %d\n\n", len1, len2);

    // Test 11 : Pointeur NULL
    len1 = printf("%p\n", NULL);
    len2 = ft_printf("%p\n", NULL);
    printf("Vrai: %d, ft: %d\n\n", len1, len2);

    // Test 12 : Mélange
    len1 = printf("%c %s %d %u %x %p %%\n", 'Z', "test", 42, 123, 255, &x);
    len2 = ft_printf("%c %s %d %u %x %p %%\n", 'Z', "test", 42, 123, 255, &x);
    printf("Vrai: %d, ft: %d\n", len1, len2);

    return 0;
}