#include "libft.h"

int ft_isdigit(int c)
{
    return (c  >= '0' && c <= '9');
}

// int main ()
// {
//     printf("%d\n", ft_isdigit('1')); // 1
//     printf("%d\n", ft_isdigit('p')); // 0
// }