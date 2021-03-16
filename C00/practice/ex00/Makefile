SRCS	=	megaphone.cpp

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	megaphone

CC		=	clang++

CFLAG	=	-Wall -Werror -Wextra

RM		=	rm -rf

all		:	$(NAME)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

$(NAME)	:	$(OBJS)
			$(CC) $(CFLAG) -o $(NAME) $(OBJS)
