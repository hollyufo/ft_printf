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
        write(fd, "(null)", 6);
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
void	ft_puthex_fd(unsigned long num, int fd)
{
	char	*hex = "0123456789abcdef";

	if (num >= 16)
		ft_puthex_fd(num / 16, fd);
	ft_putchar_fd(hex[num % 16], fd);
}
void	ft_putptr_fd(void *ptr, int fd)
{
	unsigned long	address;

	address = (unsigned long)ptr;
	ft_putstr_fd("0x", fd);
	ft_puthex_fd(address, fd); // Pass the cast address
}
void	ft_putnbr_unsigned_fd(unsigned int nb, int fd)
{
	if (nb >= 10)
	{
		ft_putnbr_unsigned_fd(nb / 10, fd);
	}
	ft_putchar_fd((nb % 10) + '0', fd);
}
void	ft_puthex_lower_fd(unsigned int num, int fd)
{
	char	*hex = "0123456789abcdef";

	if (num >= 16)
		ft_puthex_lower_fd(num / 16, fd);
	ft_putchar_fd(hex[num % 16], fd);
}
void	ft_puthex_upper_fd(unsigned int num, int fd)
{
	char	*hex = "0123456789ABCDEF";

	if (num >= 16)
		ft_puthex_upper_fd(num / 16, fd);
	ft_putchar_fd(hex[num % 16], fd);
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
            else if (*format == 'p')
            {
                void *ptr = va_arg(args, void *);
                ft_putptr_fd(ptr, 1);
            }
            else if (*format == 'u')
            {
                unsigned int num = va_arg(args, double);
                ft_putnbr_unsigned_fd(num, 1);
            }
             else if (*format == 'x')
            {
                unsigned int num = va_arg(args, unsigned int);
                ft_puthex_lower_fd(num, 1);
            }
            else if (*format == 'X')
            {
                unsigned int num = va_arg(args, unsigned int);
                ft_puthex_upper_fd(num, 1);
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
    unsigned int num = 3735928559; // Example number (0xDEADBEEF)
    ft_printf("Lowercase hex: %x\n", num);
    ft_printf("Uppercase hex: %X\n", num);
    ft_printf("Another number: %x\n", 255); // Example with small number
    return 0;
}