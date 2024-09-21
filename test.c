#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}

void ft_printf(char typ, ...)
{
    char c;
    char *str;   
    va_list ptr;
    va_start(ptr,typ);
   
    if (typ == 'c')
    {
        c = va_arg(ptr, int);
        ft_putchar(c);
    }
    if (typ == 's')
    {
        str = va_arg(ptr, char *);
        ft_putstr(str);
    }
    va_end(ptr);
}

int main()
{
    // manage('n','neww l ine');
    manage('c',"hello");
    ft_putchar('\n');
    manage('c','g');    
    ft_putchar('\n');
    manage('s',"hello");    
    
}