# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 16:26:21 by mcaro-ro          #+#    #+#              #
#    Updated: 2025/11/06 20:56:10 by mcaro-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = braiiiiiiinnnzzzz

# Colors
GREEN   = \033[0;32m
YELLOW  = \033[0;33m
RESET   = \033[0m

CXX = c++
CXXFLAGS	=	-Wall -Werror -Wextra  -std=c++98 #-g -fsanitize=address

SRC_DIR = src
INC_DIR = inc

SRC	=	$(SRC_DIR)/main.cpp			\
		$(SRC_DIR)/Zombie.cpp		\
		$(SRC_DIR)/newZombie.cpp	\
		$(SRC_DIR)/randomChump.cpp	\

OBJS	=	$(SRC:.cpp=.o)

INCLUDES = -I$(INC_DIR) -I$(INC_DIR)/data

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

all: $(NAME)

clean:
	@echo "$(YELLOW)$(NAME): Cleaning object files...$(RESET)"
	@rm -f $(OBJS)
	@echo "$(GREEN)$(NAME): All objects have been cleaned!$(RESET)"

fclean: clean
	@echo "$(YELLOW)$(NAME): Cleaning all files...$(RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)$(NAME): All files have been cleaned!$(RESET)"

re: fclean all

.DEFAULT_GOAL := all
.PHONY: all clean fclean re
