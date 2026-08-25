# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/20 15:02:53 by enrgil-p          #+#    #+#              #
#    Updated: 2026/08/25 14:43:42 by enrgil-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scalarConversion_ex00	

SOURCES =	main.cpp ScalarConverter.cpp

COMPILER = c++
C_FLAGS = -Wall -Wextra -Werror -MMD -MP
STANDARD_FLAG = -std=c++98

RM = rm -f

OBJECTS = $(SOURCES:.cpp=.o)
DEPENDENCIES = $(OBJECTS:.o=.d)

# =============
# RULES
# =============

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(COMPILER) $(C_FLAGS) $(STANDARD_FLAG) $(OBJECTS) -o $(NAME)
	@$(info CREATED $(NAME))

-include $(DEPENDENCIES)

%.o: %.cpp
	@echo "\tCompiling $<"
	@$(COMPILER) $(C_FLAGS) $(STANDARD_FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJECTS) $(DEPENDENCIES)
	@$(info REMOVED OBJECTS AND DEPENDENCIES)

compclean: all clean

fclean: clean
	@$(RM) $(NAME)
	@$(info REMOVED $(NAME))

re: fclean all

.PHONY: all clean compclean fclean re
