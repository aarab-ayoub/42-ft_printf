#include "ft_printf.h"

void	ft_putstr(char *s)
{
    int i = 0;
    while (s[i])
    {
        write(1,&s[i],1);
        i++;
    }
}