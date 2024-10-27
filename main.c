#include "libft.h"

int	main(void)
{
	char			*str;
	unsigned int	n;
	size_t			len;

	str = "hello world kaneki";
	n = 6;
	len = ft_strlen(str);
	printf("%s", ft_substr(str, n, len));
	return (0);
}
// 00000001 01000111 10101110 00010100 01111010  11100001  01000111   10101110