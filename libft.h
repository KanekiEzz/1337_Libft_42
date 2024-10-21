/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:24:21 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/21 17:38:01 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include  <stdlib.h>
#include <ctype.h>

int ft_tolower(int c);
int ft_toupper(int c);
int ft_isprint(int c);
int ft_isascii(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int ch);
size_t ft_strlen(const char *s);
char *strchr(const char *str, int search);
int    ft_atoi(const char *str);
char *ft_strdup(const char *str);

void *ft_memset(void *ptr, int c, size_t len);


#endif