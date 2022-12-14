SRCS			= main.cpp PhoneBook.cpp Contact.cpp 
OBJS			= $(SRCS:.cpp=.o)

CC				= c++
RM				= rm -f
FLAG			= -Wall -Wextra -Werror -I. -std=c++98

NAME			= PhoneBook

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(FLAG) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)