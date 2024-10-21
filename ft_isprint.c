#include "libft.h"

int ft_isprint(int c)
{
    return (c >= 32 && c <= 126);
}

int main ()
{
    printf("%d\n", isprint('\n'));
    printf("%d\n", ft_isprint('\n'));

        printf("%d\n", isprint('q'));
    printf("%d\n", ft_isprint('q'));
}