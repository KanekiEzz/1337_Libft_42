#include "libft.h"

int ft_isalnum(int c)
{
    if (ft_isdigit(c) || ft_isalpha(c))
        return (c);
    return 0;
}

// int main ()
// {
//     printf("%d\n", ft_isalnum('a'));
//     printf("%d\n", ft_isalnum('\n'));
// }