#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t  i;
    
    i = 0;
    while  (s[i++] != '\0')
        ;
    return --i;
}

// int main ()
// {
//     char *str = "kaneki";
//     printf("%zu\n", ft_strlen(str));
// }