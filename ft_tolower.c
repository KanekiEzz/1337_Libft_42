#include "libft.h"

int ft_tolower(int c)
{
    return (c >= 'A' && c <= 'Z') ? c + ('a'- 'A') : c;
}

int main ()
{
    char v = ft_tolower('M');
    printf("%c", v);
}