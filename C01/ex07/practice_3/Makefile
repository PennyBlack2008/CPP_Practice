SRCS		= $(wildcard *.cpp)
OBJS		= $(SRCS:.cpp=.o)

NAME		= replace
RM			= rm -rf
CC			= clang++
FLAGS		= -Wall -Werror -Wextra

all			: $(NAME)

clean		:
			$(RM) $(OBJS)

fclean		: clean
			$(RM) $(NAME) *.replace

$(NAME)		:
		$(CC) $(FLAGS) -c $(SRCS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)