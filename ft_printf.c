#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    size_t i = 0;
    size_t j = 0;
    va_list ptr;
    va_start(ptr, format);

    if (!format)
        return 0;
    while (format)
    {
        if (format[i] == '%' && format[i + 1] != '\0')
        {
            j = i + 1;   
            if (format[j] == 'c' && format[j + 1] == '\0')
            {
                char c = va_arg(ptr, int);
                ft_putchar(c);
            }
            else if (format[j] == 's' && format[j + 1] == '\0')
            {
                char *str = va_arg(ptr, char *);
                ft_putstr(str);
            }
        }
        else
            return 0;
        i++;
    }
    va_end(ptr);
}

int main()
{
    // Test character printing
    ft_printf("%c", 'A');
    ft_putchar('\n'); // Expected output: A

    ft_printf("%c", 'Z');
    ft_putchar('\n'); // Expected output: Z

    ft_printf("%c", '!');
    ft_putchar('\n'); // Expected output: !

    // Test string printing
    ft_printf("%s", "Hello, World!");
    ft_putchar('\n'); // Expected output: Hello, World!

    ft_printf("%s", "ft_printf test");
    ft_putchar('\n'); // Expected output: ft_printf test

    ft_printf("%s", "");
    ft_putchar('\n'); // Expected output: (nothing)

    // Edge cases
    ft_printf("%c", '\0'); // Test null character
    ft_putchar('\n'); // Expected output: (nothing)

    ft_printf("%s", NULL); // Test null string
    ft_putchar('\n'); // Expected output: (nothing)

    // Invalid format cases
    ft_printf("%x", 'A'); // Invalid format specifier
    ft_putchar('\n'); // Expected output: (nothing or error)

    ft_printf("%c"); // Missing argument for 'c'
    ft_putchar('\n'); // Expected output: (nothing or error)

    // Mixed test case
    ft_printf("%cs", 'X', "Mixing formats");
    ft_putchar('\n'); // Expected output: XMixing formats

    return 0;
}
