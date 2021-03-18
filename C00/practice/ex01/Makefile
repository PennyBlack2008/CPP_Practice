SRCS	=	$(wildcard *.cpp)
OBJS	=	$(SRCS:.cpp=.o)

NAME	=	PhoneBook
RM		=	rm -rf
CC		=	clang++
FLAGS	=	-Wall -Werror -Wextra



all		:	$(NAME)

clean	:	
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

$(NAME)	:	
	$(CC) $(FLAGS) -c $(SRCS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
