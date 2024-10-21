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

void *ft_memset(void *ptr, int c, size_t len);


#endif