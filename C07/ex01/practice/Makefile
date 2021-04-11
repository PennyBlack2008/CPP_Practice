SRCS	= $(wildcard *.cpp)
OBJS	= $(SRCS:.cpp=.o)

NAME	= iter
RM		= rm -rf
CC		= clang++
FLAGS	= -Wall -Wextra -Werror -std=c++98

all		: $(NAME)

clean	:
			$(RM) $(OBJS)

fclean	: clean
		$(RM) $(NAME)

re		: fclean all

$(NAME) :
	$(CC) $(FLAGS) -c $(SRCS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
