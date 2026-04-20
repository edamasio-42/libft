/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edamasio <edamasio@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:04:09 by edamasio          #+#    #+#             */
/*   Updated: 2026/04/16 12:49:49 by edamasio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

int ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nbr, size_t size);
int ft_isalnum(char c);
int ft_isalpha(char c);
int ft_isascii(char c);
int ft_isdigit(char c);
int ft_isprint(char c);
char *ft_itoa(int nbr, char *str, int radix);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void *ft_memcpy(void *dest, const void  *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t len);
void    *ft_memset(void *s, int c, size_t n);
void    ft_putchar_fd(char c, int fd);
void    ft_putnbr_fd(int nbr, int fd);
void ft_putstr_fd(char *str, int fd);
char **ft_split(char *str, char *charset);
char    *ft_strchr(const char *str, int search);
char *ft_strdup(const char *s);
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strjoin(const char *s1, const char *s2);
size_t  ft_strlcat(char *dest, const char *src, size_t len);
size_t ft_strlcpy(char *dst, const char *src, size_t len);
int ft_strlen(char *str);
char *ft_strmapi(const char *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *str1, const char *str2, size_t count);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *str, int c);
char *ft_strtrim(const char *s1, const char *set);
char *ft_substr(const char *str, unsigned int start, size_t len);
int ft_tolower(char c);
int ft_toupper(char c);

#endif