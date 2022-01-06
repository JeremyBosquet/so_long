# Style
_END		:=	\033[0m
_BOLD		:=	\033[1m
_UNDER		:=	\033[4m
_REV		:=	\033[7m

# Colors
_GREY		:=	\033[30m
_RED		:=	\033[31m
_GREEN		:=	\033[32m
_YELLOW		:=	\033[33m
_BLUE		:=	\033[34m
_PURPLE		:=	\033[35m
_CYAN		:=	\033[36m
_WHITE		:=	\033[37m

CC := gcc

CFLAGS := -Wall -Wextra -Werror

PROJECT := libft.a

HEADER_SRCS := libft.h

SRCS :=		ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_split.c

OBJS := $(addprefix objs/, $(SRCS:.c=.o))

OBJS_DIRS := $(sort $(dir $(OBJS)))

INCLUDE := $(addprefix -I,$(dir $(HEADER_SRCS)))

NAME := $(PROJECT)

all: $(NAME)

$(NAME): Makefile $(OBJS)
	@ar rcs $@ $(OBJS)
	@printf "%-30b%b" "\033[2K\r$(_GREEN)  libft" "$(_BOLD)[OK]$(_END)\n"

$(OBJS): | $(OBJS_DIRS)

$(OBJS_DIRS):
	@mkdir -p $@
	@printf "%-30b%b" "\033[2K\r$(_GREEN)  libft" "$(_CYAN)[$@ created]$(_END)\n"

objs/%.o: %.c $(HEADER_SRCS)
	@printf "%-30b%b" "\033[2K\r$(_YELLOW)  libft:" "$(_BOLD)[$<]\033[0m"
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@rm -rf $(OBJS)
	@printf "\033[2K\r$(_RED)libft: All objects files have been deleted. $(_END)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "\033[2K\r$(_RED)libft: '"$(NAME)"' has been deleted. $(_END)\n"

ffclean:
	@rm -rf $(OBJS_DIRS)
	@$(RM) $(NAME)
	@printf "\033[2K\r$(_RED)libft: objs folder has been deleted. $(_END)\n"
	@printf "\033[2K\r$(_RED)libft: '"$(NAME)"' has been deleted. $(_END)\n"

fcleaned:
	@rm -rf $(OBJS)
	@$(RM) $(NAME)
	@printf "\033[2K\r$(_RED)libft: '"$(NAME)"' has been deleted. $(_END)\n"

re: fclean all

norme:
	@norminette

.PHONY: all clean fclean ffclean fcleaned re norme