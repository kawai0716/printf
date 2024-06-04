#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c) 
{
    return write(1, &c, 1);
}

int ft_putstr(char *str, int *count) 
{
    while (*str) {
        *count += ft_putchar(*str++);
    }
    return *count;
}

int	printf_x(unsigned long int i, int *n)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (i >= 16)
		printf_x(i / 16, n);
	*n += write(1, &hex_digits[i % 16], 1);
    return (*n);
}

int printf_str_p(char *str, int *count) 
{
    *count += ft_putstr("0x", count);
    if(!str)
        *count += ft_putchar('0');
    while (*str) 
    {
        printf_x((unsigned int)(*str), count);
        str++;
    }
    return *count;
}

int printf_p(void *p, int *count) 
{
    unsigned long addr = (unsigned long)p;
    *count += ft_putstr("0x", count);
    if (addr == 0) {
        *count += ft_putchar('0');
    } else {
        printf_x((unsigned int)addr, count);
    }
    return *count;
}

int main() 
{
    int count = 0;
    char *str = "Hello";
    printf_str_as_hex(str, &count);
    printf("\nCharacters written: %d\n", count);

    return 0;
}
