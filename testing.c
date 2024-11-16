#include <stdio.h>
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int count = 0;
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 's')
            {
                char *str = va_arg(args, char *);
                printf("string: %s\n", str);
            }
            else if (*format == 'd')
            {
                int num = va_arg(args, int);
                printf("int: %d\n", num);
            }
            else if (*format == 'c')
            {
                char c = va_arg(args, int);
                printf("char: %c\n", c);
            }
            else if (*format == 'f')
            {
                double d = va_arg(args, double);
                printf("double: %f\n", d);
            }
            count++;
        }
        format++;
    }
}

int main()
{
    int count = ft_printf("Hello %s, %d, %c, %f\n", "world", 42, 'a', 3.14);
    printf("count = %d\n", count);
    return 0;
}