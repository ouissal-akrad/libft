#ifndef LIB_FT
#define LIB_FT

#include<stdio.h>
#include<unistd.h>
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum( int c );
int ft_isascii(int c);
int ft_isprint( int c );
size_t ft_strlen(const char *str);
int ft_toupper( int character );
int ft_tolower( int character );
int ft_atoi(const char *str);
char *ft_strchr(const char *str, int c);
char * strrchr( const char *str, int c );
int ft_strncmp( const char *s1, const char *s2, size_t n );
char 	*ft_strnstr (const char *s, const char *to_find, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dest, const char *src, size_t size);
void *ft_memset(void *ptr, int x, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove( void * dest, const void * src, size_t n);

#endif