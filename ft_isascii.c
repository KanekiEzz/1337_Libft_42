#include "libft.h"

int ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}

int main ()
{
    printf("%d\n", ft_isascii('0x7c'));
    printf("%d\n", isascii('0x7c'));

    printf("%d\n", ft_isascii('\n'));
    printf("%d\n", isascii('\n'));
}