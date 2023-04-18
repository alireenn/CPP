NAME    =   RPN
SRC     =   $(wildcard *.cpp)
OBJ     =   $(SRC:%.cpp = %.o)
CC      =   g++
FLAGS   =   -Wall -Wextra -Werror -std=c++98
RM      =   rm -rf
all: $(NAME)
RESET       =   "\033[0m"
BLACK       =   "\033[30m"
RED         =   "\033[31m"
GREEN       =   "\033[32m"
YELLOW      =   "\033[33m"
BLUE        =   "\033[34m"
MAGENTA     =   "\033[35m"
CYAN        =   "\033[36m"
WHITE       =   "\033[37m"
BOLDBLACK   =   "\033[1m\033[30m"
BOLDRED     =   "\033[1m\033[31m"
BOLDGREEN   =   "\033[1m\033[32m"
BOLDYELLOW  =   "\033[1m\033[33m"
BOLDBLUE    =   "\033[1m\033[34m"
BOLDMAGENTA =   "\033[1m\033[35m"
BOLDCYAN    =   "\033[1m\033[36m"
BOLDWHITE   =   "\033[1m\033[37m"
$(NAME): $(OBJ)
		@echo "\033[1m\033[37mCompilation...\033[37m"
		@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
		@echo "\033[1m\033[32mReady ---> CPP 09 - ex01\033[37m"
fclean: clean
	@printf "removing program executable $(NAME)\n\033[0;37m"
	$(RM) $(NAME)
	@printf "\033[0;35mExecutable removed!\n\n\033[0;37m"
clean:
	@printf "removing Object files $(OBJS)\n\033[0;37m"
	$(RM) $(OBJS) *.dSYM
	@printf "\033[0;35mObject files removed!\n\n\033[0;37m"
re: fclean all