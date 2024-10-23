/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:04:15 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/23 18:29:05 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	_count_word(const char *str, char c)
{
	size_t	i;
	size_t	kaneki;
	size_t	word;

	i = 0;
	kaneki = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] == c)
			kaneki = 0;
		else if (kaneki == 0)
		{
			kaneki = 1;
			word++;
		}
		i++;
	}
	return (word);
}

size_t	_len_word(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

void	ft_free(char **ptr, int k)
{
	int	i;

	if (k == 1)
		free(ptr[k]);
	i = 0;
	while (i < k)
		free(ptr[k++]);
}

char	**_loop(char **ptr, const char *s, char c)
{
	size_t	i;
	size_t	k;
	size_t	word_len;
	size_t	j;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word_len = _len_word(&s[i], c);
			ptr[k] = (char *)malloc((word_len + 1) * sizeof(char));
			if (!ptr[k])
				return (NULL);
			j = 0;
			while (j < word_len)
				ptr[k][j++] = s[i++];
			ptr[k++][j] = '\0';
		}
		else
			i++;
	}
	ptr[k] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = (char **)malloc((_count_word(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	return (_loop(ptr, s, c));
}

// void	f(void)
// {
// 	system("leaks a.out");
// }
// int	main(void)
// {
// 	char *s = "aaaaa, d m d as m, das, dsa,";
// 	char **o = ft_split(s, ',');
// 	atexit(f);
// 	int i = 0;
// 	while (o[i])
// 	{
// 		printf("%s", o[i++]);
// 		printf("\n");
// 	}
// }