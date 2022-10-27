
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
		ft_strjoin.c\
		ft_split.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c

BNS = ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c
OBJ_M = $(SRC:.c=.o)

OBJ_B = $(BNS:.c=.o)

DEP_M = $(SRC:.c=.d)

DEP_B = $(BNS:.c=.d)

%.o: %.c #Makefile
	$(CC) $(CFLAGS) -o $@ -c $<

%.d: %.c
	@$(CC) -MM -o $@ $<

$(NAME) : $(OBJ_M) #Makefile
	@echo "Creating $(NAME)"
	@$(AR) rcs $(NAME) $(OBJ_M)

all : $(NAME)

clean :
	@echo "deleting .o and .d"
	@$(RM) $(OBJ_M) $(OBJ_B) $(DEP_M) $(DEP_B)

fclean : clean
	@echo "deleting $(NAME)"
	@$(RM) $(NAME)

-include $(DEP_M) $(DEP_B)

re : fclean all

bonus  : $(OBJ_B) #Makefile
	@echo "Creating $(NAME)"
	@$(AR) rcs $(NAME) $(OBJ_B)

.PHONY : clean fclean all re
