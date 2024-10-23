/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 01:58:55 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/23 02:37:11 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	_not_print(char const s1, char const *set)
// {
// 	int	i;

// 	i = 0;
// 	while (set[i])
// 	{
// 		if (set[i] == s1)
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

// size_t	_chek_len_start(char const *s1, char const *set)
// {
// 	size_t	start;
// 	size_t	num_not_print;

// 	start = 0;
// 	num_not_print = 0;
// 	while (s1[start])
// 	{
// 		if (_not_print(s1[start], set))
// 			break ;
// 		else
// 			num_not_print++;
// 		start++;
// 	}
// 	return (num_not_print);
// }

// size_t	_chek_len_end(char const *s1, char const *set, size_t setlen)
// {
// 	size_t	end;
// 	size_t	num_not_print;

// 	end = setlen;
// 	num_not_print = setlen;
// 	while (s1[end])
// 	{
// 		if (_not_print(s1[end], set))
// 			break ;
// 		else
// 			num_not_print--;
// 		end--;
// 	}
// 	return (num_not_print);
// }

// char	*ft_svtrtrim(char const *s1, char const *set)
// {
// 	size_t	i;
// 	size_t	s1len;
// 	size_t	all_len_print;
// 	char	*ptr;
// 	size_t	chek_start;
// 	size_t	chek_end;

// 	if (s1 == NULL || set == NULL)
// 		return (NULL);
// 	s1len = ft_strlen(s1) - 1;
// 	chek_start = _chek_len_start(s1, set);
// 	chek_end = _chek_len_end(s1, set, s1len) + 1;
// 	if (chek_start >= s1len || chek_end <= 0)
// 		return (NULL);
// 	all_len_print = chek_end - chek_start;
// 	ptr = (char *)malloc((all_len_print + 1) * sizeof(char));
// 	if (!ptr)
// 		return (NULL);
// 	i = 0;
// 	while (chek_start < chek_end)
// 	{
// 		ptr[i] = s1[chek_start];
// 		chek_start++;
// 		i++;
// 	}
// 	ptr[i] = '\0';
// 	return (ptr);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	start = 0;
	end = strlen(s1);
	// البحث عن أول حرف غير موجود في set من البداية
	while (s1[start] && strchr(set, s1[start]))
	{
		start++;
	}
	// البحث عن آخر حرف غير موجود في set من النهاية
	while (end > start && strchr(set, s1[end - 1]))
	{
		end--;
	}
	// تخصيص الذاكرة للسلسلة الجديدة
	trimmed = malloc(end - start + 1);
	if (!trimmed)
	{
		return (NULL); // فشل التخصيص
	}
	// نسخ النص المتبقي
	strncpy(trimmed, s1 + start, end - start);
	trimmed[end - start] = '\0'; // إضافة نهاية السلسلة
	return (trimmed);
}

int	main(void)
{
	char *result = ft_strtrim("  abcdefj  ", "be");
	printf("Result: '%s'\n", result);
	free(result); // إذا قمت بتخصيص الذاكرة
	return (0);
}