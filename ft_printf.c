#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
	{
		return ;
	}
	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
}
void	ft_putnbr_fd(int nb, int fd)
{
	long int	num;

	num = nb;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	ft_putchar_fd((num % 10) + '0', fd);
}
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
                ft_putstr_fd(str, 1);
            }
            else if (*format == 'd' || *format == 'i')
            {
                int num = va_arg(args, int);
                ft_putnbr_fd(num, 1);
            }
            else if (*format == 'c')
            {
                char c = va_arg(args, int);
                ft_putchar_fd(c, 1);
            }
            else if (*format == 'f')
            {
                double d = va_arg(args, double);
                printf("%f", d);
            }
            else
            {
                ft_putchar_fd(*format, 1);
            }
            count++;
        }
        else if (*format != '%')
        {
            ft_putchar_fd(*format, 1);
        }
        format++;
    }
    va_end(args);
    return count;
}

int main()
{
    ft_printf("ft_printf = Hello %s, %d, %c\n", "world", 42, 'a');
    // printf("\nprintf = Hello %s, %d, %c, %f, \n", "world", 42, 'a', 3.14);
    return 0;
}