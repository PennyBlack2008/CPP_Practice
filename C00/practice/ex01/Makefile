SRCS	=	$(wildcard *.cpp)

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	phoneBook

RM		=	rm -rf

CC		=	clang++

CFLAG	=	-Wall -Werror -Wextra



all		:	$(NAME)

clean	:	
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all



$(NAME)	:
			$(CC) $(CFLAG) -c $(SRCS)
			$(CC) $(CFLAG) -o $(NAME) $(OBJS)
