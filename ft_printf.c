#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    size_t i = 0;
    int count = 0;
    va_list ptr;
    va_start(ptr, format);

    if (!format)
        return 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%' && format[i + 1] != '\0')
        {
            i++;
            if (format[i] == 'c')
            {
                char c = va_arg(ptr, int);
                ft_putchar(c);
                count++;
            }
            else if (format[i] == 's')
            {
                char *str = va_arg(ptr, char *);
                ft_putstr(str);
                count += ft_strlen(str);
            }
        }
        else
        {
            ft_putchar(format[i]);
            count++;
        }
        i++;
    }
    va_end(ptr);
    return count;
}


int main(void)
{
    // Test 1: Simple string
    ft_printf("Hello, World!\n");

    // Test 2: Single character with %c
    ft_printf("Character: %c\n", 'A');

    // Test 3: String with %s
    ft_printf("String: %s\n", "42 is awesome");

    // Test 4: Mix of regular text, %c, and %s
    ft_printf("Mixed: %c and %s and %c\n", 'X', "Hello", 'Z');

    // Test 5: Empty string
    ft_printf("Empty string: '%s'\n", "");

    // Test 6: Multiple %c in a row
    ft_printf("Chars: %c%c%c%c%c\n", 'H', 'E', 'L', 'L', 'O');

    return 0;
}
