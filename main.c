#include "libft.h"

int	main(void)
{
    char *dest = "kaneki";
    char *src = "ken";

	printf("%zu\n", ft_strlcat(dest, src, 1));
	printf("%zu\n", strlcat(dest, src, 1));
}