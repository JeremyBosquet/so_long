/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:32:45 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/09 17:39:50 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_isalpha(int character);
int				ft_isdigit(int character);
int				ft_isalnum(int character);
int				ft_isascii(int character);
int				ft_isprint(int character);
size_t			ft_strlen(const char *str);
void			*ft_memset(void *membloc, int value, size_t n);
void			ft_bzero(void *membloc, size_t size);
void			*ft_memcpy(void *dest, const void *src, size_t size);
void			*ft_memmove(void *dest, const void *src, size_t n);
size_t			ft_strlcpy(char *dest, const char *src, size_t size_t);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
int				ft_toupper(int character);
int				ft_tolower(int character);
char			*ft_strchr(const char *str, int searchedChar);
char			*ft_strrchr(const char *str, int searchedChar);
int				ft_strncmp(const char *a, const char *b, size_t n);
void			*ft_memchr(void *membloc, int searchedChar, size_t size);
int				ft_memcmp(const void *m1, const void *m2, size_t size);
char			*ft_strnstr(const char *str, const char *to_find, size_t n);
int				ft_atoi(const char *str);
char			*ft_strdup(const char *str);
void			*ft_calloc(size_t count, size_t size);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_itoa(int n);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif