#include <libc.h>

// str =
// (str, f, n)
// unsigned char *mem;

// mem =
// i = 0;

// str
// &str
// *str str[i]

void	ft_modify(char **str)
{
	str[0][0] = 's';
}

int	main(void)
{
	char *str;

	str = "sadasd";
	ft_modify(&str);
	printf("%s\n", str);
}