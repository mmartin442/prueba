#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(const char *s);
void	*ft_memset(void *b, int c. size_t len);
void	ft_bzero(void *s, size_t n);

int	ft_toupper(int c);
int	ft_tolower(int c);
int	*ft_strchr(const char *s, int c);
int	*ft_strrchr(const char *s, int c);


#endif
