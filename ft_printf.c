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
            else if (format[i] == 'd' || format[i] == 'i')
            {
                int c = va_arg(ptr, int);
                ft_putnbr(c);
                count++;
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
    ft_printf("Mixed: %c and %s and %c\n", 'X', "Hello", 'Z');

    ft_printf("Chars: %c%c%c%c%c\n", 'H', 'E', 'L', 'L', 'O');
    ft_printf("the number %d%d%d%d%d\n", 42, 0xA, 13221341, 432, -341);
    // ft_printf("the number %d\n",0xff);
    return 0;
}
