
NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC = ft_strrchr.c\
		ft_substr.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_atoi.c\
		ft_strchr.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_strtrim.c\
		ft_itoa.c\
		ft_strjoin.c

OBJ = $(SRC:.c=.o)

DEP = $(SRC:.c=.d)

%.o: %.c #Makefile
	$(CC) $(CFLAGS) -o $@ -c $<

%.d: %.c
	@$(CC) -MM -o $@ $<

$(NAME) : $(OBJ) #Makefile
	@echo "Creating $(NAME)"
	@$(AR) rcs $(NAME) $(OBJ)

all : $(NAME)

clean :
	@echo "deleting .o and .d"
	@$(RM) $(OBJ) $(DEP)

fclean : clean
	@echo "deleting $(NAME)"
	@$(RM) $(NAME)

-include $(DEP)

re : fclean all

.PHONY : clean fclean
